abstract class J_Class{
	int m_data;

	public J_Class(int i){
		m_data = i;
	}

	public abstract void mb_method();
}

public class J_InnerClass{
	public static void main(String[] args){
		J_Class b = new J_Class(5){
			public void mb_method(){
				System.out.println("m_data="+m_data);
			}
		};
		b.mb_method();
	}
}