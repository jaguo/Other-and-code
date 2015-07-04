import java.awt.*;
import javax.swing.*;

class J_Panel extends JPanel{
	protected void paintComponent(Graphics g){
		double d, tx;
		int x, y, x0, y0;

		d = Math.PI/200;
		x0=y0=0;
		for(tx = 0, x = 30; tx < 2*Math.PI; tx+=d, x++){
			y = 200 - (int)(Math.sin(tx)*80 + 100);
			if (x > 30)
				g.drawLine(x0, y0, x, y);
			x0 = x;
			y0 = y;
		}
		g.drawString("y=sin(x)", 10, 30);
	}
}

public class J_DrawSin extends JApplet{
	public void init(){
		Container c = getContentPane();
		c.add(new J_Panel(), BorderLayout.CENTER);
	}
}