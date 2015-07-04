public class J_BlockGranularity extends Thread{
	public static int m_data = 0;
	public static int m_times = 10;
	public int m_ID;
	public boolean m_done;

	J_BlockGranularity(int id){
		m_ID = id;
	}

	public void run(){
		m_done = false;
		int d = ((m_ID % 2 == 0) ? 1 : -1);
		System.out.println("Run Thread " + m_ID + " inc: " + d);
		try{
			synchronized(Class.forName("J_BlockGranularity")){
				for(int i = 0; i < m_times; i++){
					System.out.println("Run:" + i + "  ID: " + m_ID);
					for(int j = 0; j < m_times; j++){
						//System.out.println("Run:" + i + "ID: " + m_ID);
						m_data += d;
					}
				}
			}
		}catch(ClassNotFoundException e){
			e.printStackTrace();
		}

		m_done = true;
		System.out.println("Data: " + m_data);
		System.out.println("End Thread: " + m_ID);
	}

	public static void main(String[] args) {
		J_BlockGranularity t1 = new J_BlockGranularity(1);
		J_BlockGranularity t2 = new J_BlockGranularity(2);
		t1.m_done = false;
		t2.m_done = false;
		t1.start();
		t2.start();
		while ((!t1.m_done || !t2.m_done))
			//System.out.println("t1: " + t1.m_done + " t2 " + t2.m_done);
			;
		System.out.println("t1: " + t1.m_done + " t2 " + t2.m_done);
		System.out.println("Result: m_data = " + m_data);
	}
}