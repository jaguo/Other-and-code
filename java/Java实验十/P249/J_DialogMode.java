import javax.swing.JOptionPane;

public class J_DialogMode{
	public static void main(String[] args) {
		JOptionPane.showMessageDialog(null, "���1");
		JOptionPane.showConfirmDialog(null, "�㻹��ô2");
		JOptionPane.showInputDialog(null, "�㻹��ô3");
		String [] s = {"��", "����"};
		JOptionPane.showInputDialog(null, "�����ڻ�����", "����",
			JOptionPane.QUESTTON_MESSAGE, null, s, s[0]);
	}
}