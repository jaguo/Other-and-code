import guojian.J_Employee;
import guojian.J_Teacher;

public class J_University{
	public static void main(String args[]){
		J_Employee a= new J_Employee();
		a.mb_printInfo();
		a = new J_Teacher();
		a.mb_printInfo();
	}
}