import java.io.File;

public class J_File{
	public static void main(String[] args) {
		for (int i = 0; i < args.length; i ++){
			File f = new File(args[i]);
			if (f.exists()){
				System.out.println("getName:" + f.getName());
				System.out.println("getPath:" + f.getPath());
				System.out.println("getParent:" + f.getParent());
				System.out.println("length:" + f.length());
			}
			else{
				System.out.printf("File %1$s not exists%n", args[i]);
			}
		}
	}
}