public class J_Break{
	public static void main(String agrs[]){
		int i=0;
		aBreakBlock:
		{
			System.out.println("break qian");
			if(i<=0)
				break aBreakBlock;
			System.out.println("在if和break语句之后");
		}
		System.out.println("在aBreakBlock语句块之后");
	}
}