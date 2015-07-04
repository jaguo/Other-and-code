class J_Experiment{

	public static void mb_sleep(long millis){
		try{
			Thread.sleep(millis);
		}catch(InterruptedException e){
			System.out.println("Exception");
			e.printStackTrace();
		}
	}

	public static synchronized void mb_methodStatic(int id){
		System.out.println("Thread " + id + " join Static");
		mb_sleep(1000);
		System.out.println("Thread " + id + " leave Static");
	}

	public synchronized void mb_methodSynchronized(int id){
		System.out.println("Thread " + id + " join synchronized not");
		mb_sleep(1000);
		System.out.println("Thread " + id + " leave synchronized not");
	}

	public void mb_method(int id){
		System.out.println("Thread " + id + " join method");
		mb_sleep(1000);
		System.out.println("Thread " + id + " leave method");
	}
}

public class J_SynchronizedStatic extends Thread{
	public int m_ID;
	public J_Experiment m_data;

	J_SynchronizedStatic(int id){
		m_ID = id;
	}

	public void run(){
		System.out.println("Thread run" + m_ID);
		m_data.mb_methodSynchronized(m_ID);
		m_data.mb_methodStatic(m_ID);
		m_data.mb_method(m_ID);
		System.out.println("Thread end");
	}

	public static void main(String[] args) {
		int n = 2;
		J_SynchronizedStatic [] t = new J_SynchronizedStatic[n];
		J_Experiment d = new J_Experiment();
		for(int i = 0; i < n; i++){
			t[i] = new J_SynchronizedStatic(i);
			t[i].m_data = d;
			t[i].start();
		}
	}
}