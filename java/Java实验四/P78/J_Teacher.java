package guojian;

import guojian.J_Employee;

public class J_Teacher extends J_Employee{
	public int m_classHour;

	public J_Teacher(){
		m_classHour=96;
	}

	public void mb_printInfo(){
		System.out.println("该教师的工作年限为"+m_workYear);
		System.out.println("该教师授课的课时为"+m_classHour);
	}
}