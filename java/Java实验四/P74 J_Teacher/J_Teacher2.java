class J_Employee{
	public int m_workYear;

	public J_Employee(){
		m_workYear = 1;
	}

	public void mb_printInfo(){
		System.out.println("��ְ���Ĺ�������Ϊ"+m_workYear);
	}
}

public class J_Teacher2 extends J_Employee{
	public int m_classHour;

	public J_Teacher2(){
		m_classHour = 96;
	}

	public void mb_printInfo(){
		System.out.println("��ְ���Ĺ�������Ϊ"+m_workYear);
		System.out.println("�ý�ʦ�ڿεĿ�ʱΪ"+m_classHour);
	}

	public static void main(String[] args) {
		J_Employee a = new J_Employee();
		a.mb_printInfo();
		a = new J_Teacher2();
		a.mb_printInfo();
	}
}