package exercise.graphics.rectangle;
import exercise.graphics.Shape;

public class Rectangle extends Shape{
	public int length;
	public int width;

	public Rectangle(){
		System.out.println("Null");
	}

	public Rectangle(int n){
		System.out.println("Null");
	}

	public Rectangle(int length, int width){
		this.length=length;
		this.width=width;
	}

	public double getArea(){
		return length*width;
	}

	public double getPerimeter(){
		return 2*(length+width);
	}

	public void PrintName(){
		System.out.println("Rectangle");
	}
}