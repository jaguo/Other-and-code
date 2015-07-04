public	class J_Thread extends Thread{
	private int m_threadID;

	public J_Thread(int i){
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
		new J_Thread(1).start();
		new J_Thread(2).start();
		System.out.println("Main is end");
	}
}