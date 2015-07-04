import java.awt.*;
import javax.swing.*;

public class J_BorderLayout{
	public static void main(String[] args) {
		JFrame app = new JFrame("Example");
		app.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		app.setSize(360, 130);
		Container c = app.getContentPane();

		c.add(new JButton("east"), BorderLayout.EAST);
		c.add(new JButton("west"), BorderLayout.WEST);
		c.add(new JButton("south"), BorderLayout.SOUTH);
		c.add(new JButton("north"), BorderLayout.NORTH);
		c.add(new JButton("center"), BorderLayout.CENTER);
		app.setVisible(true);
	}
}