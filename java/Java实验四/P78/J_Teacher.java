package guojian;

import guojian.J_Employee;

public class J_Teacher extends J_Employee{
	public int m_classHour;

	public J_Teacher(){
		m_classHour=96;
	}

	public void mb_printInfo(){
		System.out.println("�ý�ʦ�Ĺ�������Ϊ"+m_workYear);
		System.out.println("�ý�ʦ�ڿεĿ�ʱΪ"+m_classHour);
	}
}