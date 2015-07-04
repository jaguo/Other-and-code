public class J_SynchronizedMethod extends Thread{
	public int m_ID;
	public J_Experiment m_data;

	J_SynchronizedMethod(int id){
		m_ID = id;
	}

	public void run(){
		System.out.println("Run thread " + m_ID);
		m_data.mb_method1(m_ID);
		m_data.mb_method2(m_ID);
		System.out.println("Thread end " + m_ID);
	}

	public static void main(String[] args) {
		int n = 2;
		J_SynchronizedMethod [] t = new J_SynchronizedMethod[n];
		J_Experiment d = new J_Experiment();
		for(int i = 0; i < n; i++){
			t[i] = new J_SynchronizedMethod(i);
			t[i].m_data = d;
			t[i].start();
		}
		System.out.println("Main end");
	}
}

class J_Experiment{

	public static void mb_sleep(long millis){
		try{
			Thread.sleep(millis);
		}catch(InterruptedException e){
			System.out.println("Exception");
			e.printStackTrace();
		}
	}

	public synchronized void mb_method1(int id){
		System.out.println("Thread " + id + " join mb1");
		mb_sleep(1000);
		System.out.println("Thread " + id + " leave mb1");
	}

	public synchronized void mb_method2(int id){
		System.out.println("Thread " + id + " join mb1");
		mb_sleep(1000);
		System.out.println("Thread " + id + " leave mb2");
	}
}