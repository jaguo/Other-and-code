public class J_Picture{
	public static void main(String agrs[]){
		int i,j,k;
		for(k=1;k<=4;k++){
			for(i=1;i<=4;i++){
				if(i<=4-k)
					System.out.print(' ');
				else
					System.out.print('*');
			}		
			System.out.println();
		}
	}
}