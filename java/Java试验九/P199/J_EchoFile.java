import java.io.FileInputStream;
import java.io.IOException;

public class J_EchoFile{
	public static void main(String[] args) {
		try{
			FileInputStream f = new FileInputStream("J_EchoFile.java");
			int i;
			int b = f.read();
			for(i = 0; b != -1; i ++){
				System.out.print((char)b);
				b = f.read();
			}

			System.out.println();
			System.out.println("File\"test.txt\" byte is :" + i);
			f.close();
		}
		catch(IOException e){
			System.err.println("Exception:" + e);
			e.printStackTrace();
		}
	}
}