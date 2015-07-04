import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

class J_ActionListener implements ActionListener{
	int m_count = 0;

	public void actionPerformed(ActionEvent e){
		JButton b = (JButton)e.getSource();
		b.setText("click" + (++m_count) + "times");
	}
}

public class J_Button1 extends JFrame{
	public J_Button1(){
		super("example");
		Container c = getContentPane();
		JButton b = new JButton("click 0 time");
		J_ActionListener a = new J_ActionListener();
		b.addActionListener(a);
		c.add(b, BorderLayout.CENTER);
	}

	public static void main(String[] args) {
		J_Button1 app = new J_Button1();
		app.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		app.setSize(100, 80);
		app.setLayout(new FlowLayout());
		app.setVisible(true);
	}
}