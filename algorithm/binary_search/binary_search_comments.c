#include <stdio.h>


// define binary_search which takes four arguments:
// an array, low_index of array, high_index of array, the value (x)
int binary_search(int array[], int low_index, int high_index, int x) {

// check if high is greater or equal to low, return -1 if false (empty)
	if (high_index >= low_index) {
	
// calculate index of middle integer
		int middle_index = low_index + (high_index - low_index) / 2;
		
// checks if integer in current index matches x
		if (array[middle_index] == x)
		
// return current middle_index if above is true
			return middle_index;
			
// checks if the middle_index is greater than x
		if (array[middle_index] > x)
		
// if above is true; does recursive call with left of half search range
			return binary_search(array, low_index, middle_index - 1, x);
			
// if false; does recursive call with right half of search range
		return binary_search(array, middle_index + 1, high_index, x);
	}
	
// if range is empty, return -1 to indicate x not found
	return -1;
}

int main(void) {

// define and initialize an array of integers
	int array[] = {2, 3, 4, 7, 10, 13, 17, 21, 24, 29, 35, 37, 40, 57};
	
// calculate number of integers in array
	int n = sizeof(array) / sizeof(array[0]);
	
// define and initialize value to search
	int x = 29;
	
// calls binary search function with:
// the array, search range(from 0 to n - 1), x
// stores the result in "result"
	int result = binary_search(array, 0, n - 1, x);
	
// checks if result is -1; if so- print "is not present"
// if result != 1; then print which index it is at
	(result != -1) ? printf("Integer is present at index %d\n", result)
				   : printf("Integer is not present in the array\n");
				   
	return 0;
}