class J_Employee2{

	public int m_workYear;

	public J_Employee2(){
		m_workYear = 1;
	}

	public void mb_printInfo2(){
		System.out.println("��ְ���Ĺ�������Ϊ"+m_workYear);
	}
}

public class J_Teacher2 extends J_Employee2{

	public int m_classHour;

	public J_Teacher2(){
		m_classHour = 96;
	}

	public void mb_printInfo2(){
		System.out.println("�ý�ʦ�Ĺ�������Ϊ"+m_workYear);
		System.out.println("�ý�ʦ�ڿεĿ�ʱΪ"+m_classHour);
	}

	public static void main(String args[]){
		J_Employee2 a = new J_Employee2();
		a.mb_printInfo2();
		a = new J_Teacher2();
		a.mb_printInfo2();
	}
}