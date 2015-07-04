package exercise.test;
import exercise.graphics.circle.Circle;
import exercise.graphics.rectangle.Rectangle;
import exercise.graphics.triangle.Triangle;

public class Test{
	public static void main(String[] args){
		Circle a = new Circle(2);
		a.PrintName();
		System.out.println("Area="+a.getArea());
		System.out.println("Perimeter="+a.getPerimeter());
		System.out.println("");

		Rectangle b = new Rectangle(3,4);
		b.PrintName();
		System.out.println("Area="+b.getArea());
		System.out.println("Perimeter="+b.getPerimeter());
		System.out.println("");

		Triangle c = new Triangle(3,4,5);
		c.PrintName();
		System.out.println("Area="+c.getArea());
		System.out.println("Perimeter="+c.getPerimeter());
		System.out.println("");
	}
}