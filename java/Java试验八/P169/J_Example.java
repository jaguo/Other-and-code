public class J_Example{
	public static void main(String[] args) {
		int [] a = {10 , 20 , 30 , 40 , 50};
		int s = 0;
		for(int c : a)
			s += c;
		System.out.println("数组元素之和等于" + s);

		s = 0;
		for (int i = 1; i <= a.length; i++)
			s +=i;
		System.out.println("从1一直加到数组a的元素长度,结果等于" + s);

		s = 0;
		int [] ca = a;
		for (int i = 0; i < ca.length; i++){
			int c = ca[i];
			s += c;
		}
		System.out.println("数组元素之和等于" + s);
	}
}