class J_Employee{
	public int m_workYear;

	public J_Employee(){
		m_workYear = 1;
	}
}

public class J_Teacher extends J_Employee{
	public int m_classHour;

	public J_Teacher(){
		m_classHour = 96;
	}

	public void mb_printInfo(){
		System.out.println("�ý�ʦ�Ĺ�������Ϊ"+m_workYear);
		System.out.println("�ý�ʦ�ڿεĿ�ʱΪ"+m_classHour);
	}

	public static void main(String args[]){
		J_Teacher tom = new J_Teacher();
		tom.mb_printInfo();
	}
}