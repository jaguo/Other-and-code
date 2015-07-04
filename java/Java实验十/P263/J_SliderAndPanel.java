import java.awt.*;
import javax.swing.*;

public class J_SliderAndPanel{
	public static void main(String[] args) {
		JFrame app = new JFrame("example");
		app.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		app.setSize(360, 120);
		Container c = app.getContentPane();
		c.setLayout(new FlowLayout());
		JSlider s = new JSlider(JSlider.HORIZONTAL, 0, 30, 10);
		JPanel p = new JPanel();
		p.setPreferredSize(new Dimension(100, 60));
		System.out.println(n);
		p.setBackground(Color.green);
		c.add(s);
		c.add(p);
		app.setVisible(true);
	}
}