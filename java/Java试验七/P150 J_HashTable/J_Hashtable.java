import java.util.Hashtable;

public class J_Hashtable{
	public static void main(String[] args) {
		String [] sa = {"Marry", "Tom", "John", "James", "Louis", "Jim", "Rose", "Ann", "Liza", "Betty", "Henry", "Albert"};
		Hashtable<String, Integer> ht = new Hashtable<String, Integer>();

		int i;
		for(i=0;i<sa.length;i++)
			ht.put(sa[i],new Integer(i));

		i=8;
		System.out.println("��sa������,�±�Ϊ"+i+"���ַ�����\"" + sa[i] +"\"");

		String s=sa[i];
		System.out.println("��sa������,\"" + s +"\"���±���"+ ht.get(s));
	}
}