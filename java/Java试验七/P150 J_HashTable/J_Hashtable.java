import java.util.Hashtable;

public class J_Hashtable{
	public static void main(String[] args) {
		String [] sa = {"Marry", "Tom", "John", "James", "Louis", "Jim", "Rose", "Ann", "Liza", "Betty", "Henry", "Albert"};
		Hashtable<String, Integer> ht = new Hashtable<String, Integer>();

		int i;
		for(i=0;i<sa.length;i++)
			ht.put(sa[i],new Integer(i));

		i=8;
		System.out.println("在sa数组中,下标为"+i+"的字符串是\"" + sa[i] +"\"");

		String s=sa[i];
		System.out.println("在sa数组中,\"" + s +"\"的下标是"+ ht.get(s));
	}
}