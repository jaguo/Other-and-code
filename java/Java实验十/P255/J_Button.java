import java.awt.Container;
import java.awt.FlowLayout;
import javax.swing.ButtonGroup;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JCheckBox;
import javax.swing.JFrame;
import javax.swing.JRadioButton;

public class J_Button extends JFrame{
	public J_Button(){
		super("按钮例程");
		Container c = getContentPane();
		c.setLayout (new FlowLayout());

		int i;
		//创建命令式按钮并添加到框体中
		ImageIcon [] ic = {
			new ImageIcon("left.gif"),
			new ImageIcon("right.gif")
		};
		JButton [] b = {
			new JButton("左", ic[0]),
			new JButton("中间"),
			new JButton("右", ic[1])
		};
		for(i = 0; i < b.length; i++)
			c.add(b[i]);

		//创建复选框按钮并添加到框体中
		JCheckBox [] ck = {
			new JCheckBox("左"),
			new JCheckBox("右")
		};
		for(i = 0; i < ck.length; i++){
			c.add(ck[i]);
			ck[i].setSelected(true);
		}

		//创建单选按钮并添加到框架中
		JRadioButton [] r = {
			new JRadioButton("左"),
			new JRadioButton("右")
		};
		ButtonGroup rg = new ButtonGroup();
		for(i = 0; i < r.length; i++){
			c.add(r[i]);
			rg.add(r[i]);
		}
		r[0].setSelected (true);
		r[1].setSelected (false);
	}

	public static void main(String[] args) {
		J_Button app = new J_Button();
		app.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		app.setSize(500, 320);
		app.setVisible(true);
	}
}