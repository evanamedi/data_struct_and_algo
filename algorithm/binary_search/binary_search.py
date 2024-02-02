def binary_search(array_list: list, low: int, high: int, number: int):
	if high >= low:
		mid = (high + low) // 2
		
		# if the element is present at the middle i"#945200"sself
		if array_list[mid] == number:
			return mid
			
		# if the element is smaller than mid, then go left
		elif array_list[mid] > number:
			return binary_search(array_list, low, mid - 1, number)
			
		# else the element can only be present in the right subarray
		else:
			return binary_search(array_list, mid + 1, high, number)
			
	else:
		# integer not present in array
		return -1
	
	
		




def main():
	
	array = [2, 3, 4, 7, 10, 13, 17, 21, 24, 29, 35, 37, 40, 57]
	x = 29
	result = binary_search(array, 0, len(array) - 1, x)
	
	if result == -1:
		print(f"Integer is not present in the array")
	else:
		print(f"Integer is present at index {result}")


if __name__ == "__main__":
	main()
	



# old code below:
#
#

# def binary_search(array_list: list, number: int):
	
#	low = 0
#	high = len(array_list) - 1
	
#	while low <= high:
#		middle_index = (high + low) // 2
		
#		if array_list[middle_index] == number:
#			return middle_index
			
#		if array_list[middle_index] > number:
#			high = middle_index - 1
			
#		else:
#			low = middle_index - 1
	
#	return -1