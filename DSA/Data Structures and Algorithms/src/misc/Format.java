package misc;

for (int i = 0; i < n - 1; i++) {
	int min = i;
	
	// search for the smallest element
	for (int j = i + 1; j < n; j++) {
		if (arr[j] < arr[min])
			min = j;
	}
	
	// swap the smallest element with the element at i
	if (min != i) {
		int temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
}