import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.util.*;

public class CompleteGraph extends JPanel{
	private Vector<Point> point = new Vector<Point>();
	private Point mousexy = new Point(0, 0);

	public CompleteGraph(){
		
		addMouseListener(new MouseAdapter(){
			public void mouseReleased(MouseEvent e){
				Point p = new Point(e.getX(), e.getY());
				point.add(p);
				repaint();
			}

			public void mouseClicked(MouseEvent e){
				if(e.getClickCount() == 2)
					point.clear();
			}
		});

		addMouseMotionListener(new MouseMotionAdapter(){
			public void mouseMoved(MouseEvent e){
				mousexy = e.getPoint();
				repaint();
			}
		});
	}

	protected void paintComponent(Graphics g){
		g.clearRect(0, 0, getWidth(), getHeight());
		g.drawLine(mousexy.x - 10, mousexy.y, mousexy.x + 10, mousexy.y);
		g.drawLine(mousexy.x, mousexy.y + 10, mousexy.x, mousexy.y - 10);
		Point s, t;
		int i, j;
		int n = point.size();
		for(i = 0; i < n; i++){
			t = point.get(i);
			for(j = 0; j < n; j++){
				s = point.get(j);
				g.drawLine(t.x, t.y, s.x, s.y);
			}
		}
	}
}