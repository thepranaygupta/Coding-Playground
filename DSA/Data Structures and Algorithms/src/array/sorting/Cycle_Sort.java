// TODO: Sort an array using Cycle Sort Technique
package array.sorting;

import java.util.Arrays;

public class Cycle_Sort {

	public static void cycleSort(int arr[], int n) {
		int writes = 0;
		for (int cycle_start = 0; cycle_start <= n - 2; cycle_start++) {
			int item = arr[cycle_start];
			int pos = cycle_start;
			for (int i = cycle_start + 1; i < n; i++)
				if (arr[i] < item)
					pos++;
			if (pos == cycle_start)
				continue;
			while (item == arr[pos])
				pos += 1;
			if (pos != cycle_start) {
				int temp = item;
				item = arr[pos];
				arr[pos] = temp;
				writes++;
			}
			while (pos != cycle_start) {
				pos = cycle_start;
				for (int i = cycle_start + 1; i < n; i++)
					if (arr[i] < item)
						pos += 1;
				while (item == arr[pos])
					pos += 1;
				if (item != arr[pos]) {
					int temp = item;
					item = arr[pos];
					arr[pos] = temp;
					writes++;
				}
			}
		}
	}

	public static void main(String[] args) {
//		int arr[] = { 1, 8, 3, 9, 10, 10, 2, 4 };
		int arr[] = { 10, 5, 2, 3 };
		System.out.println("Array before Sorting: " + Arrays.toString(arr));

		int n = arr.length;
		cycleSort(arr, n);
		System.out.println("Array after Sorting: " + Arrays.toString(arr));
	}
}