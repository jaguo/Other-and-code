public class J_Circle implements J_Shape{
	public double m_x, m_y;
	public double m_radius;

	public J_Circle(double r){
		m_x = 0;
		m_y = 0;
		m_radius = r;
	} 

	public J_Circle(double x, double y,double r){
		m_x = x;
		m_y = y;
		m_radius = r;
	}

	public double mb_getArea(){
		return (Math.PI*m_radius*m_radius);
	}
}