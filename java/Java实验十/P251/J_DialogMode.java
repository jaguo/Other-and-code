import javax.swing.JOptionPane;
import javax.swing.JFrame;

public class J_DialogMode{
	public static void main(String[] args) {
		JFrame app = new JFrame("TEST");
		app.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		app.setSize(300, 200);
		app.setVisible(true);

		JOptionPane.showMessageDialog(app, "���1");
		JOptionPane.showConfirmDialog(app, "�㻹��ô2");
		JOptionPane.showInputDialog(app, "�㻹��ô3");
		String [] s = {"��", "����"};
		JOptionPane.showInputDialog(app, "�����ڻ�����", "����",
			JOptionPane.QUESTION_MESSAGE, null, s, s[0]);
	}
}