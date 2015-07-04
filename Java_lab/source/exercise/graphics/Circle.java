package exercise.graphics.circle;
import exercise.graphics.Shape;

public class Circle extends Shape{
	public double r;

	Circle(){
		System.out.println("Null");
	}

	public Circle(double r){
		this.r=r;
	}

	public double getArea(){
		return 3.14*r*r;
	}

	public double getPerimeter(){
		return 2*3.14*r;
	}

	public void PrintName(){
		System.out.println("Circle");
	}
}