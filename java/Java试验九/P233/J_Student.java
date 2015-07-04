import java.io.Serializable;

public class J_Student implements Serializable{
	static final long Serializable = 123456L;

	String m_name;
	int m_id;
	int m_height;

	public J_Student(String name, int id, int h){
		m_name = name;
		m_id = id;
		m_height = h;
	}

	public void mb_output(){
		System.out.println("name:" + m_name);
		System.out.println("Num:" + m_id);
		System.out.println("height:" + m_height);
	}
}