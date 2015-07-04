import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class MouseMove extends JFrame{
	public MouseMove(){
		super("Move");
		Container container = getContentPane();
		container.setLayout(new FlowLayout());

		JTextField tf = new JTextField("",20);
		tf.setEditable(false);
		tf.setText("abc");
		container.add(tf);

		addMouseMotionListener(new MouseMotionAdapter(){
			public void mouseMoved(MouseEvent e){
				int x = e.getX();
				int y = e.getY();
				tf.setText("X=" + x + "\tY=" + y);
			}
		});

	}

	public static void main(String[] args) {
		MouseMove app = new MouseMove();
		app.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		app.setSize(410, 500);
		app.setVisible(true);
	}
}
