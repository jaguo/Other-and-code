package exercise.graphics.triangle;
import exercise.graphics.Shape;

public class Triangle extends Shape{
	public double a;
	public double b;
	public double c;

	public Triangle(){
		System.out.println("Null");
	}

	public Triangle(double a){
		this();
	}

	public Triangle(double a,double b){
		this();
	}

	public Triangle(double a,double b,double c){
		this.a=a;
		this.b=b;
		this.c=c;
	}

	public double getPerimeter(){
		return a+b+c;
	}

	public double getArea(){
		double p=this.getPerimeter()/2;
		return Math.sqrt(p*(p-a)*(p-b)*(p-c));
	}

	public void PrintName(){
		System.out.println("Triangle");
	}
}