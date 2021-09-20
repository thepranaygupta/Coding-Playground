package recursion;

import java.util.Arrays;

public class Reverse_Array {

	public static void main(String[] args) {
		int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
		System.out.println("Original Array: " + Arrays.toString(arr));

		reverse(arr, 0, arr.length - 1);
		System.out.println("Reversed Array: " + Arrays.toString(arr));
	}

	static void reverse(int[] arr, int i, int j) {
		if (i >= j)
			return;
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		reverse(arr, i + 1, j - 1);
	}
}