public class J_Prime{
	public static void main(String agrs[]){
		int i=51;
		boolean ok=true;
		for(i=51;i<=100;i+=2){
			ok=true;		\\
			for(int j=2;j<i/2;j++){
				if(i%j==0){
					ok=false;
					break;
				}
			}
			if(ok)
				System.out.println(i);
		}
	}
}