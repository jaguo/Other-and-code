class J_Time{
	public int data = 3;
}

public class J_Scope extends J_Time{
	public int data = 2;

	public void mb_method(){
		int data = 1;
		System.out.println("data="+data);
		System.out.println("this.data="+this.data);
		System.out.println("super.data="+super.data);
	}

	public static void main(String[] args) {
		J_Scope a = new J_Scope();
		a.mb_method();
	}
}