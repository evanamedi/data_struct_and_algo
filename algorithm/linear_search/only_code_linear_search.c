#include <stdio.h>

int linear_search(int array[], int size_of_array, int x) {
	for(int i = 0; i < size_of_array; i++) {
		if(array[i] == x)
			return i;
	}
	return -1;
}

int main(void) {
	int array[] = {10, 20, 30, 40, 50};
	int size_of_array = sizeof(array) / sizeof(array[0]);
	int x = 30;
	
	int result = linear_search(array, size_of_array, x);
	(result == -1) ? printf("Integer is not present in array")
				   : printf("Integer is present at index %d\n", result);
				   
	return 0;
}