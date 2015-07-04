import java.awt.Container;
import java.awt.FlowLayout;
import javax.swing.JDialog;
import javax.swing.JFrame;
import javax.swing.JLabel;

public class J_FrameDialog{
	public static void main(String[] args) {
		JFrame app = new JFrame("¿ò¼Ü");
		app.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		app.setSize(200, 100);
		app.setVisible(true);

		JDialog d = new JDialog(app, "¶Ô»°¿ò", false);
		Container c = d.getContentPane();
		c.setLayout(new FlowLayout(FlowLayout.LEFT));
		c.add(new JLabel("ÄãºÃ"));
		d.setSize(80, 80);
		d.setVisible(true);
	}
}