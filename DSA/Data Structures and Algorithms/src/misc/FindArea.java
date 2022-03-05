package misc;

public class FindArea {

	public void area(float side) {
		System.out.println("The area of the square is " + Math.pow(side, 2));
	}

	public void area(float a, float b) {
		System.out.println("The area of the rectangle is " + a * b);
	}

	public void area(double radius) {
		System.out.println("The area of the circle is " + 3.14 * radius * radius);

	}

	public void area(double a, double b, double c) {
		double s = (a + b + c) / 2;
		double result = Math.sqrt(s * (s - a) * (s - b) * (s - c));
		System.out.println("The area of the triangle is " + result);
	}

	public static void main(String[] args) {
		FindArea ob = new FindArea();
		ob.area(5);
		ob.area(6, 8);
		ob.area(10.2);
		ob.area(15, 15, 15);

	}

}
