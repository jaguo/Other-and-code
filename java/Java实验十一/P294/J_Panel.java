import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.util.*;

public class J_Panel extends JPanel{
	private Vector<Vector<Point>> m_vectorSet = new Vector<Vector<Point>>();

	public J_Panel(){
		addMouseListener(new MouseListener(){
			public void mouseClicked(MouseEvent e){
			}

			public void mouseEntered(MouseEvent e){
			}

			public void mouseExited(MouseEvent e){	
			}

			public void mousePressed(MouseEvent e){
				Point p = new Point(e.getX(), e.getY());
				Vector<Point> v = new Vector<Point>();
				v.add(p);
				m_vectorSet.add(v);
			}

			public void mouseReleased(MouseEvent e){
			}
		}
		);
		addMouseMotionListener(new MouseMotionListener(){
				public void mouseMoved(MouseEvent e){
				}

				public void mouseDragged(MouseEvent e){
					Point p = new Point(e.getX(), e.getY());
					int n = m_vectorSet.size() - 1;
					Vector<Point> v = m_vectorSet.get(n);
					v.add(p);
					repaint();
				}
			}
			
		);
	}

	protected void paintComponent (Graphics g){
		g.clearRect(0, 0, getWidth(), getHeight());
		Vector<Point> v;
		Point s, t;
		int i, j, m;
		int n = m_vectorSet.size();
		for(i = 0; i < n; i++){
			v = m_vectorSet.get(i);
			m = v.size() - 1;
			for(j = 0; j < m; j++){
				s = (Point)v.get(j);
				t = (Point)v.get(j + 1);
				g.drawLine (s.x, s.y, t.x, t.y);
			}//for
		}//for
	}//paintComponet

	public Dimension getPreferredSize(){
		return new Dimension(255, 120);
	}
}