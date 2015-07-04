
public class J_CheckPrime{
	public int n;
	
	public J_CheckPrime(){

	}

	public void PrintPrime(int n){
		boolean OK = true;
		for(int i=2;i<=n/2;i++){
			if(n%i == 0)
				OK = false;
		}
		if(OK)
			System.out.println(n+" is prime");
		else
			System.out.println(n+" isn\'t prime");
	}
	
	public static void main(String args[]){
		J_CheckPrime prime = new J_CheckPrime();
		for(int i=2;i<100;i++)
			prime.PrintPrime(i);
	}
}