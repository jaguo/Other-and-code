import java.awt.event.*;
import javax.swing.*;

public class J_Menu extends JFrame{
	public J_Menu(){
		super("example");
		JMenuBar mBar = new JMenuBar();
		setJMenuBar(mBar);

		JMenu [] m = { new JMenu("File(F)"), new JMenu("Edit(E)")};
		char [][] mC = {{'F', 'E'}, {'O', 'S'}, {'C', 'V'}};

		JMenuItem [][] mI ={
			{new JMenuItem("Open(O)"), new JMenuItem("Save(S)")},
			{new JMenuItem("Copy(C)"), new JMenuItem("Paste(V)")}
		};

		int i, j;
		for (i = 0; i < m.length; i++){
			mBar.add(m[i]);
			m[i].setMnemonic(mC[0][i]);
			for (j = 0; j < mI[i].length; j++){
				m[i].add(mI[i][j]);
				mI[i][j].setMnemonic(mC[i+1][j]);
				mI[i][j].setAccelerator(
						KeyStroke.getKeyStroke("ctrl" + mC[i+1][j]));
				mI[i][j].addActionListener(new ActionListener(){
					public void actionPerformed(ActionEvent e){
						JMenuItem mItem = (JMenuItem)e.getSource();
						System.out.println("RunMenu:" + mItem.getText());
					}
				});
			}
		}
		m[0].insertSeparator(1);
	}
}
