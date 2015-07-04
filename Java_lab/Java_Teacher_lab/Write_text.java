import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.DataOutputStream;
import java.io.*;
import java.util.*;

public class Write_text{
	public static void main(String[] args) {
		try{
			FileWriter fout = new FileWriter("test.txt");
			Scanner scanner = new Scanner(System.in);
			String str = scanner.nextLine();
			fout.write(str);
			fout.close();
		}
		catch(Exception e){
			System.err.println("Excption:" + e);
			e.printStackTrace();
		}
	}
}