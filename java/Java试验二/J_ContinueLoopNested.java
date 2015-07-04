public class J_ContinueLoopNested{
	public static void main(String agrs[]){
		aContinueBlock:
		for(int i=0;i<4;i++){
			for(int j=0;j<2;j++){
				if(0<i && i<3)
					continue aContinueBlock;
				System.out.println("i="+i+",j="+j);
			}
		}
	}
}