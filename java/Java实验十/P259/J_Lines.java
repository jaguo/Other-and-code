import java.awt.*;
import javax.swing.*;

public class J_Lines extends JFrame{
	public J_Lines(){
		super("example");
		Container c = getContentPane();
		c.setLayout(new FlowLayout());

		String [] s = {"one", "two", "three"};
		JComboBox cb = new JComboBox(s);
		JList t = new JList(s);
		JTextArea ta = new JTextArea("1\n2\n3\n4\n5", 3, 10);
		JScrollPane sta = new JScrollPane(ta);
		c.add(cb);
		c.add(t);
		c.add(sta);
	}

	public static void main(String[] args) {
		J_Lines app = new J_Lines();
		app.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		app.setSize(250, 120);
		app.setVisible(true);
	}
}