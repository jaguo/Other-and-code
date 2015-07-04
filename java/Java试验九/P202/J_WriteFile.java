import java.io.FileOutputStream;
import java.io.IOException;

public class J_WriteFile{
	public static void main(String[] args) {
		String s = "File Input and Output example\n";
		byte [] b = s.getBytes();
		try{
			FileOutputStream f = new FileOutputStream("out.txt");
			f.write(b);
			f.flush();
			f.close();
		}
		catch(IOException e){
			System.err.println("exception:" + e);
			e.printStackTrace();
		}
	}
}