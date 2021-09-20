package misc;

import java.util.Arrays;

// initial arguments: (arr, arr.length)
static void sum(int[] arr, int n) {
	if(n < 1)
		return;
	int temp[] = new int[n-1];
	for(int i = 0; i < n-1; i++) {
		temp[i] = arr[i] + arr[i + 1];
	}
	sum(temp, n - 1);
	System.out.println(Arrays.toString(arr));
}