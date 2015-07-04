public class J_ThreadRunnable implements Runnable{
	private int m_threadID;

	public J_ThreadRunnable(int i){
		m_threadID = i;
		System.out.println("Chreat Thread: " + i);
	}

	public void run (){
		for (int i = 0; i < 3; i++){
			System.out.println("run thread:" + m_threadID);
			try{
				Thread.sleep((int)(Math.random() * 1000));
			}catch(InterruptedException e){
				e.printStackTrace();
			}
		}
	}

	public static void main(String[] args) {
		Thread a = new Thread(new J_ThreadRunnable(1));
		a.start();
		Thread b = new Thread(new J_ThreadRunnable(2));
		b.start();
		System.out.println("Main is end");
	}
}