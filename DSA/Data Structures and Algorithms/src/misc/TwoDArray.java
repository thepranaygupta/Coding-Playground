//Define two one dimensional arrays of 10 elements namely num1 and Num 2  of integer types fill those arrays by taking input from the user.
//create a menu-driven method based program for the following requirements
//Case 1: construct an array called union containing the union of those two arrays
//Case2: create an array  called intersect containing the intersection of those two arrays
//Case3: here  user can opt whether she wants to obtain num 1 -num 2 or Num2  - num1

package misc;

import java.util.*;

public class TwoDArray {

	private static void formUnion(int[] num1, int[] num2, int size) {
		int[] union = new int[size * 2];
		for (int i = 0; i < size; i++)
			union[i] = num1[i];
		for (int i = size; i < size * 2; i++)
			union[i] = num2[i - size];

		System.out.println("Union Array is: ");
		for (int i = 0; i < size * 2; i++)
			System.out.print(union[i] + ", ");
	}

	private static void formIntersect(int[] num1, int[] num2, int size) {
		int[] intersect = new int[size * 2];
		int x = 0;
		for (int i = 0; i < size; i++) {
			intersect[x++] = num1[i];
			intersect[x++] = num2[i];
		}

		System.out.println("Intersect Array is: ");
		for (int i = 0; i < size * 2; i++)
			System.out.print(intersect[i] + ", ");

	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the size of Array: ");
		int size = sc.nextInt();
		int[] num1 = new int[size];
		int[] num2 = new int[size];
		System.out.println("Enter Elements of num1: ");
		for (int i = 0; i < size; i++)
			num1[i] = sc.nextInt();
		System.out.println("Enter Elements of num2: ");
		for (int i = 0; i < size; i++)
			num2[i] = sc.nextInt();

		System.out.println(
				"1: construct an array called union containing the union of those two arrays\n2: create an array  called intersect containing the intersection of those two arrays\n3: here  user can opt whether she wants to obtain num 1 -num 2 or Num2  - num1");
		System.out.print("Enter your Choice: ");
		int choice = sc.nextInt();
		switch (choice) {
		case 1:
			formUnion(num1, num2, size);
			break;

		case 2:
			formIntersect(num1, num2, size);
			break;

		case 3:
			System.out.println("\n1: num1 - num2\n2: num2 - num1");
			System.out.println("Enter your choice: ");
			int ch = sc.nextInt();
			if (ch == 1) {
				System.out.print("NUM1 - NUM2 = ");
				for (int i = 0; i < size; i++)
					System.out.print(num1[i] - num2[i] + ", ");
			}
			if (ch == 2) {
				System.out.print("NUM2 - NUM1 = ");
				for (int i = 0; i < size; i++)
					System.out.print(num2[i] - num1[i] + ", ");
			}
			break;

		default:
			System.out.println("Invalid Input!!");
		}
	}
}
