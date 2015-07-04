import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

public class J_Button2 extends JFrame{
	public J_Button2(){
		super ("example");
		Container c = getContentPane();
		JButton b = new JButton("click 0 time");
		b.addActionListener(new ActionListener(){
			int m_count = 0;
			public void actionPerformed(ActionEvent e){
				JButton b = (JButton)e.getSource();
				b.setText("click" + (++m_count) + "times");
			}
		}
		);

		c.add(b, BorderLayout.CENTER);
	}

	public static void main(String[] args) {
		J_Button2 app = new J_Button2();
		app.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		app.setSize(100, 80);
		app.setVisible(true);
	}
}