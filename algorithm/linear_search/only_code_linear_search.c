#include <stdio.h>

int linear_search(int arr[], int n, int x) {
	for(int i = 0; i < n; i++) {
		if(arr[i] == x)
			return i;
	}
	return -1;
}

int main(void) {
	int arr[] = {10, 20, 30, 40, 50};
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 30;
	
	int result = linear_search(arr, n, x);
	(result == -1) ? printf("Integer is not present in array")
				   : printf("Integer is present at index %d\n", result);
				   
	return 0;
}