import java.awt.Graphics;
import javax.swing.JApplet;
public class J_HelloApplet extends JApplet
{
	public void paint(Graphics g)
	{
		g.clearRect(0,0,getWidth(),getHeight());
		g.drawString("СӦ�ó�����ã�",10,20);
 	}
}