import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class MenuDemo extends JFrame{
	private int top = 0;

	public MenuDemo(){
		super("Stack");
		Container c = getContentPane();

		JMenuBar mb = new JMenuBar();
		setJMenuBar(mb);

		JMenu m1 = new JMenu("File");
		JMenu m2 = new JMenu("Edit");
		mb.add(m1);
		mb.add(m2);

		JMenuItem mi1 = new JMenuItem("Open"); 
		JMenuItem mi2 = new JMenuItem("Save");
		m1.add(mi1);
		m1.add(mi2);
		JMenuItem mi3 = new JMenuItem("Copy");
		m2.add(mi3);

		c.setLayout(new BoxLayout(c, BoxLayout.Y_AXIS));

		JPanel panel1 = new JPanel();
		JPanel panel2 = new JPanel();
		c.add(panel1);
		c.add(panel2);

		JButton clearBT = new JButton("Clear");
		JButton pushBT	= new JButton("Push");
		JButton popBT	= new JButton("Pop");
		JTextField tx	= new JTextField("", 8);
		panel1.add(clearBT);
		panel1.add(pushBT);
		panel1.add(popBT);
		panel1.add(tx);

		panel2.setLayout(new BoxLayout(panel2, BoxLayout.Y_AXIS));
		JButton [] numBT 	= new JButton [10];
		JTextField [] numTX = new JTextField [10];
		JPanel [] numP		= new JPanel[10];
		for (int i = 0; i <= 9; i++){
			String s ="" + (i);
			numBT[i] = new JButton(s);
			numTX[i] = new JTextField("", 8);
			numTX[i].setEditable(false);
			numP[i]	= new JPanel();
		} 
		for (int i = 9; i >= 0; i--){
			panel2.add(numP[i]);
			numP[i].add(numBT[i]);
			numP[i].add(numTX[i]);
		}

		JLabel tblabel = new JLabel("good");
		JToolBar tb = new JToolBar();
		c.add(tb, BorderLayout.SOUTH);
		tb.add(tblabel);

		clearBT.addActionListener(new ActionListener(){
			public void actionPerformed(ActionEvent e){
				top = -1;
				for(int i = 0; i < 10; i++){
					numTX[i].setText("");
				}
				tx.setText("");
			}
		});

		popBT.addActionListener(new ActionListener(){
			public void actionPerformed(ActionEvent e){
				for(int i = 0; i < 10; i++){
					numBT[i].setForeground(Color.BLACK);
				}

				if(top >= 0){
					numTX[top].setText("");
					numBT[top].setForeground(Color.RED);
					top--;
				}else{
					tblabel.setForeground(Color.RED);
					tblabel.setText("Stack is empty");
				}
			}
		});

		pushBT.addActionListener(new ActionListener(){
			public void actionPerformed(ActionEvent e){
				if(!tx.getText().isEmpty()){
					for(int i = 0; i < 10; i++){
						numBT[i].setForeground(Color.BLACK);
					}

					if(top < 9){
						numTX[++top].setText(tx.getText());
						numBT[top].setForeground(Color.RED);
						tblabel.setForeground(Color.BLACK);
						tblabel.setText("ok");
					}else{
						tblabel.setForeground(Color.RED);
						tblabel.setText("Stack is full");
					}
				}else{
					tblabel.setForeground(Color.RED);
					tblabel.setText("Please input data");
				}
			}
		});
	}

	public static void main(String[] args) {
		MenuDemo app = new MenuDemo();
		
		app.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		app.setSize(410, 500);
		app.setVisible(true);
	}
}
