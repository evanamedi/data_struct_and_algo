#include <stdio.h>

int binary_search(int array[], int low_index, int high_index, int x) {
	if (high_index >= low_index) {
		int middle_index = low_index + (high_index - low_index) / 2;
		if (array[middle_index] == x)
			return middle_index;
		if (array[middle_index] > x)
			return binary_search(array, low_index, middle_index - 1, x);
		return binary_search(array, middle_index + 1, high_index, x);
	}
	return -1;
}

int main(void) {
	int array[] = {2, 3, 4, 7, 10, 13, 17, 21, 24, 29, 35, 37, 40, 57};
	int n = sizeof(array) / sizeof(array[0]);
	int x = 29;
	int result = binary_search(array, 0, n - 1, x);
	(result != -1) ? printf("Integer is present at index %d\n", result)
				   : printf("Integer is no present in the array\n");
				   
	return 0;
}