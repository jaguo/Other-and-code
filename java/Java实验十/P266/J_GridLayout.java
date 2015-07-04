import java.awt.*;
import javax.swing.*;

public class J_GridLayout{
	public static void main(String[] args) {
		JFrame app = new JFrame("Example");
		app.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		app.setSize(520, 120);
		Container c = app.getContentPane();
		c.setLayout(new GridLayout(2, 5));
		String s;
		JButton b;
		for(int i = 0; i < 5; i++){
			s = "Button" + (i + 1);
			b = new JButton(s);
			c.add(b);
		}
		app.setVisible(true);
	}
}