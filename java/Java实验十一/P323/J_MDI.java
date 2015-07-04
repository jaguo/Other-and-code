import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class J_MDI extends JFrame{
	private JDesktopPane m_desktop = new JDesktopPane();
	private int m_count = 0;

	public J_MDI(){
		super("example");
		JMenuBar   theMenuBar   = new JMenuBar();
		JMenu      theMenuFile  = new JMenu("File");
		JMenuItem  theMenuItem  = new JMenuItem("New");

		setJMenuBar(theMenuBar);
		theMenuBar.add(theMenuFile);
		theMenuFile.add(theMenuItem);
		theMenuFile.setMnemonic('F');
		theMenuItem.setMnemonic('N');

		Container theContainer = getContentPane();
		theContainer.add(m_desktop);

		theMenuItem.addActionListener(new ActionListener(){
			public void actionPerformed(ActionEvent e){
				String s = "Document" + m_count;
				m_count ++;
				JInternalFrame theInternalFrame = new JInternalFrame(s, true, true, true, true);
				J_Panel thePanel = new J_Panel();
				Container c = theInternalFrame.getContentPane();
				c.setLayout(new BorderLayout());
				c.add(thePanel, BorderLayout.CENTER);
				theInternalFrame.pack();

				m_desktop.add(theInternalFrame);
				theInternalFrame.setVisible(true);
			}
		});
 	}

 	public static void main(String[] args) {
 		JFrame app = new J_MDI();
 		app.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		app.setSize(400, 250);
		app.setVisible(true);
 	}
}