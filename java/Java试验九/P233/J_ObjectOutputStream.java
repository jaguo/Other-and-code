import java.io.FileOutputStream;
import java.io.ObjectOutputStream;

public class J_ObjectOutputStream{
	public static void main(String[] args) {
		try{
			ObjectOutputStream f = new ObjectOutputStream(
				new FileOutputStream("object.dat"));
			J_Student s = new J_Student("jack", 2013001, 172);
			f.writeObject(s);
			s.mb_output();
			f.close();
		}
		catch (Exception e){
			System.out.println("exception:" + e);
			e.printStackTrace();
		}
	}
}