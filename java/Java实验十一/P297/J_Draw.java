import java.awt.*;
import javax.swing.*;

public class J_Draw extends JFrame{
	public J_Draw(){
		super("Draw");
		Container c = getContentPane();
		c.add(new J_Panel(), BorderLayout.CENTER);
	}

	public static void main(String[] args) {
		J_Draw app = new J_Draw();
		app.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		app.setSize(300, 200);
		app.setVisible(true);
	}
}