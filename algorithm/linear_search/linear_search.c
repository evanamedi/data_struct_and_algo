#include <stdio.h>

// function named linear_search & it takes:
// an array, size of the array, element to be searched 
int linear_search(int arr[], int n, int x) {

// loop through each item starting at index[0]
	for(int i = 0; i < n; i++) {
	
// checks if element in current index == x
		if(arr[i] == x)
		
// if check above equals true, then return i
			return i;
	}
// if element is not found in array, return -1 to indicate as such
	return -1;
}

int main(void) {

// declare and initialize an array of integers
	int arr[] = {10, 20, 30, 40, 50};
	
// calculate the number of elements in the array
	int n = sizeof(arr) / sizeof(arr[0]);
	
// initialize the integer to be searched
	int x = 30;
	
// calles the function with its corresponding inputs
	int result = linear_search(arr, n, x);
	
// uses ternary operator to check value retuned to result
	(result == -1) ? printf("Integer is not present in array")
				   : printf("Integer is present at index %d\n", result);
	return 0;
}