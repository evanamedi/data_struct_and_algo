#include <stdio.h>

// function named linear_search & it takes:
// an array, size of the array, element to be searched 
int linear_search(int array[], int size_of_array, int x) {

// loop through each item starting at index[0]
	for(int i = 0; i < size_of_array; i++) {
	
// checks if element in current index == x
		if(array[i] == x)
		
// if check above equals true, then return i
			return i;
	}
// if element is not found in array, return -1 to indicate as such
	return -1;
}

int main(void) {

// declare and initialize an array of integers
	int array[] = {10, 20, 30, 40, 50};
	
// calculate the number of elements in the array
	int size_of_array = sizeof(array) / sizeof(array[0]);
	
// initialize the integer to be searched
	int x = 30;
	
// calles the function with its corresponding inputs
	int result = linear_search(array, size_of_array, x);
	
// uses ternary operator to check value retuned to result
	(result == -1) ? printf("Integer is not present in array")
				   : printf("Integer is present at index %d\n", result);
	return 0;
}