import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class J_Digit extends JApplet implements ActionListener{
	private JTextField m_textField = new JTextField();

	public void init(){
		Container c = getContentPane();
		JButton b;
		String [] s = {
			BorderLayout.SOUTH, BorderLayout.EAST,
			BorderLayout.NORTH, BorderLayout.WEST
		};
		for (int i = 0; i < 4; i++){
			b = new JButton("" + i);
			c.add(b, s[i]);
			b.addActionListener(this);
		}
		c.add(m_textField, BorderLayout.CENTER);
	}

	public void actionPerformed(ActionEvent e){
		String s = m_textField.getText() + e.getActionCommand();
		m_textField.setText(s);
	}
}