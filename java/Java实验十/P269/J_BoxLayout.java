import java.awt.*;
import javax.swing.*;

public class J_BoxLayout{
	public static void main(String[] args) {
		JFrame app = new JFrame("Example");
		app.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		app.setSize(220, 130);
		Container c = app.getContentPane();
		c.setLayout(new BoxLayout(c, BoxLayout.Y_AXIS));
		String s;
		JButton b;
		for(int i = 0; i < 3; i++){
			s = "Button" + (i + 1);
			b = new JButton(s);
			c.add(b);
		}

		app.setVisible(true);
	}
}