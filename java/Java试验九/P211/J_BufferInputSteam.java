import java.io.BufferedInputStream;
import java.io.FileInputStream;
import java.util.Date;


public class J_BufferInputSteam{
	private static String m_fileName = "J_BufferInputSteam.class";

	public static void main(String[] args) {
		System.out.println("123");
		try{
			int i;
			int ch;
			i = 0;
			Date d1 = new Date();
			FileInputStream f = new FileInputStream(m_fileName);
			while((ch=f.read()) != -1)
				i++;
			f.close();
			Date d2 = new Date();

			long t = d2.getTime() - d1.getTime();
			System.out.printf(String.format("%1$s  %2$d  %n", m_fileName, i));
			System.out.printf(" %1$d   %n", t);

			i = 0;
			d1 = new Date();
			f = new FileInputStream(m_fileName);
			BufferedInputStream fb = new BufferedInputStream(f);
			while((ch=fb.read()) != -1)
				i++;
			fb.close();
			d2 = new Date();

			t = d2.getTime() - d1.getTime();
			System.out.printf("Buffered %1$dms%n", t);
		}
		catch (Exception e){
			System.err.println("exception:" + e);
			e.printStackTrace();
		}
	}
}