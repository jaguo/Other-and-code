interface J_Inerface{
	public static int  m_data = 5;

	public abstract void mb_method();
}

public class J_InnerInterface{
	public static void main(String[] args){
		J_Inerface b = new J_Inerface(){
			public void mb_method(){
				System.out.println("m_data=" + m_data);
			}
		};
		b.mb_method();
	}
}