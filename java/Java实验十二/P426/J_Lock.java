public class J_Lock extends Thread{
	public static Object m_objectA = new Object();
	public static Object m_objectB = new Object();

	J_Lock(String s){
		super(s);
	}

	public static void mb_sleep(){
		try{
			Thread.sleep((long)(Math.random() * 1000));
		}catch (InterruptedException e){
			System.out.println("Exception" + e);
			e.printStackTrace();
		}
	}

	public void run(){
		boolean t = true;
		System.out.println(getName() + "Start");

		for(; true; t =! t){
			synchronized(t ? m_objectA : m_objectB){
				System.out.println(getName() + ": " + (t ? "Object A " : "Object B ") + "Lock");
				mb_sleep();
				synchronized(t ? m_objectB : m_objectA){
					System.out.println(getName() + ": " + (t ? "Object B " : "Object A ") + "Lock");
					mb_sleep();
					System.out.println(getName() + ": " + (t ? "Object B " : "Object A ") + "Open");
				}
				System.out.println(getName() + ": " + (t ? "Object A " : "Object B ") + "Open");
			}
		}
	}
	public static void main(String[] args) {
		J_Lock t1 = new J_Lock("Thread_1");
		J_Lock t2 = new J_Lock("Thread_2");
		t1.start();
		t2.start();
	}
}