public class J_BlockClass extends Thread{
	public static int m_data = 0;
	public static int m_times = 1000;
	public int m_ID;
	public boolean m_done;

	J_BlockClass(int id){
		m_ID = id;
	}

	public void run(){
		m_done = false;
		int d = ((m_ID % 2 == 0) ? 1 : -1);
		System.out.println("Run thread " + m_ID + " inc: " + d);
		try{
			synchronized(Class.forName("J_BlockClass")){
				System.out.println("Thread :" + m_ID + "joined, m_data " + m_data);
				for(int i = 0; i < m_times; i++)
					for(int j = 0; j < m_times; j++)
						m_data += d;
				System.out.println("Thread :" + m_ID + "leaved, m_data " + m_data);
			}
		}catch(ClassNotFoundException e){
			e.printStackTrace();
		}

		m_done = true;
		System.out.println("Thread " + m_ID + " over");
	}

	public static void main(String[] args) {
		J_BlockClass t1 = new J_BlockClass(1);
		J_BlockClass t2 = new J_BlockClass(2);
		t1.m_done = false;
		t2.m_done = false;
		t1.start();
		t2.start();
		while(!t1.m_done || !t2.m_done)
			;
		System.out.println("Result: m_data=" + m_data);
	}
}