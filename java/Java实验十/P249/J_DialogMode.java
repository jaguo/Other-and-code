import javax.swing.JOptionPane;

public class J_DialogMode{
	public static void main(String[] args) {
		JOptionPane.showMessageDialog(null, "你好1");
		JOptionPane.showConfirmDialog(null, "你还好么2");
		JOptionPane.showInputDialog(null, "你还好么3");
		String [] s = {"好", "不好"};
		JOptionPane.showInputDialog(null, "你现在还好吗？", "输入",
			JOptionPane.QUESTTON_MESSAGE, null, s, s[0]);
	}
}