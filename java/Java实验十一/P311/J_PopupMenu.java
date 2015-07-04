import java.awt.event.*;
import javax.swing.*;

public class J_PopupMenu extends JFrame{
	private JPopupMenu m_popupMenu;

	public J_PopupMenu(){
		super("example");
		m_popupMenu = new JPopupMenu();

		JMenu [] m = { new JMenu("File(F)"), new JMenu("Edit(E)")};
		char [][] mC = {{'F', 'E'}, {'O', 'S'}, {'C', 'V'}};

		JMenuItem [][] mI ={
			{new JMenuItem("Open(O)"), new JMenuItem("Save(S)")},
			{new JMenuItem("Copy(C)"), new JMenuItem("Paste(P)")}
		};

		int i, j;
		for (i = 0; i < m.length; i++){
			m_popupMenu.add(m[i]);
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

		addMouseListener(new MouseAdapter(){
			public void mousePressed(MouseEvent e){
				if (e.isPopupTrigger())
					m_popupMenu.show(e.getComponent(), e.getX(), e.getY());
			}

			public void mouseReleased(MouseEvent e){
				mousePressed(e);
			}
		});
	}

	public static void main(String[] args) {
		JFrame app = new J_PopupMenu();

		app.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		app.setSize(350, 120);
		app.setVisible(true);
	}
}
