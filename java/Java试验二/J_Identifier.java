public class J_Identifier{
	public static void main (String args[]){
		char c='è';
		if(Character.isJavaIdentifierStart(c))
			System.out.println("char\'"+c+"\'is right");
		else
			System.out.println("char\'"+c+"\'isn\'t right");
		if(Character.isJavaIdentifierPart(c))
			System.out.println("char\'"+c+"\'is right chu shou");
		else
			System.out.println("char\'"+c+"\'isn\'t right shou");
	}
}
