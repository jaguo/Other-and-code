class J_Book{
	public int m_id;

	public J_Book(int i){
		m_id=i;
	}

	protected void finalize(){
		switch (m_id){
			case 1:
				System.out.print("��Ʈ��");
				break;
			case 2:
				System.out.print("��Java������ƽ̡̳�");
				break;
			case 3:
				System.out.print("��������ա�");
				break;
			default:
				System.out.print("��δ֪�鼮��");
				break;
		}
		System.out.println("����Ӧ��ʵ������洢��Ԫ������");
	}
}

public class J_Finalize{
	public static void main(String args[]){
		J_Book book1 = new J_Book(1);
		new J_Book(2);
		new J_Book(3);
		System.gc();
	}
}