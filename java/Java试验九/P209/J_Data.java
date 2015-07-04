import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.FileInputStream;
import java.io.FileOutputStream;

public class J_Data{
	public static void main(String[] args) {
		try{
			FileOutputStream fout = new FileOutputStream("out.txt");
			DataOutputStream dfout = new DataOutputStream(fout);
			int i;
			for(i = 0; i < 4; i ++)
				dfout.writeInt('0' + i);
			dfout.close();

			FileInputStream fin = new FileInputStream("Out.txt");
			DataInputStream dfin = new DataInputStream(fin);
			for(i = 0; i < 16; i ++)
				System.out.print(dfin.readByte() + ", ");
			dfin.close();
		}
		catch(Exception e){
			System.err.println("exception:" + e);
			e.printStackTrace();
		}
	}
}