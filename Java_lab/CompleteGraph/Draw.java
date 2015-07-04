import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Draw extends JFrame{
	public Draw(){
		super("Draw");
		Container c = getContentPane();
		c.add(new CompleteGraph(), BorderLayout.CENTER);
	}

	public static void main(String[] args) {
		Draw app = new Draw();

		app.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		app.setSize(410, 500);
		app.setVisible(true);
	}
}