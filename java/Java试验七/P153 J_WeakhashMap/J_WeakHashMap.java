import java.util.WeakHashMap;

public class J_WeakHashMap{
	public static void main(String[] args) {
		int s=800;
		WeakHashMap<String,String> ht = new WeakHashMap<String,String>(s*4/3,0.75f);

		int i;
		for(i=0;i<s;i++)
			ht.put(("Key"+i),("value"+i));
		System.out.println("�ڸ����������ʱ������ϣ���е�Ԫ�ظ�����"+ht.size());
		for(i=0;i<s && ht.size()!=0;){
			if(!ht.containsKey("Key"+i))
				System.out.print("Key"+i+";");
			if(ht.size()!=s)
				i++;
		}

		System.out.println("");
		System.out.println("һ��ʱ��֮������ϣ��Ԫ�ظ�����"+ ht.size());
	}
}