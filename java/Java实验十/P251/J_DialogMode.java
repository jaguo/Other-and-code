import javax.swing.JOptionPane;
import javax.swing.JFrame;

public class J_DialogMode{
	public static void main(String[] args) {
		JFrame app = new JFrame("TEST");
		app.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		app.setSize(300, 200);
		app.setVisible(true);

		JOptionPane.showMessageDialog(app, "你好1");
		JOptionPane.showConfirmDialog(app, "你还好么2");
		JOptionPane.showInputDialog(app, "你还好么3");
		String [] s = {"好", "不好"};
		JOptionPane.showInputDialog(app, "你现在还好吗？", "输入",
			JOptionPane.QUESTION_MESSAGE, null, s, s[0]);
	}
}