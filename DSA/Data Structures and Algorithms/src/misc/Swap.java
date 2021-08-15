package misc;

public class Swap {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int n1 = 10, n2 = 20;
		System.out.println("n1 = " + n1 + " n2 = " + n2);
		swap(n1, n2);
	}

	static void swap(int a, int b) {
		int temp = b;
		b = a;
		a = temp;
		System.out.println("n1 = " + a + " n2 = " + b);
	}
}
