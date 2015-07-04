import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class J_KeyBoard extends JFrame{
	public J_KeyBoard(){
		super("example");
		Container c = getContentPane();

		JTextField tf = new JTextField("", 15);
		tf.addFocusListener (new FocusListener(){
			public void focusGained(FocusEvent e){
				System.out.println("catch fouse");
			}

			public void focusLost(FocusEvent e){
				System.out.println("Lose Focus");
			}
		}
		);

		tf.addKeyListener(new KeyAdapter(){
			public void keyTyped(KeyEvent e){
				System.out.println("KeyEvent:" + e.getKeyChar());
			}
		});
		c.add(tf, BorderLayout.CENTER);
	}

	public static void main(String[] args) {
		J_KeyBoard app = new J_KeyBoard();
		app.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		app.setSize(350, 80);
		app.setVisible(true);
	}
}