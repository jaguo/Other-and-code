import java.io.FileInputStream;
import java.io.ObjectInputStream;

public class J_ObjectInputStream{
	public static void main(String[] args) {
		try{
			ObjectInputStream f = new ObjectInputStream(
				new FileInputStream("object.dat"));
			J_Student s = (J_Student)(f.readObject());
			s.mb_output();
			f.close();
		}
		catch (Exception e){
			System.out.println("exception:" + e);
			e.printStackTrace();
		}
	}
}