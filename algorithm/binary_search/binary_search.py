
def binary_search(array_list: list, number: int):
	
	low = 0
	high = len(array_list) - 1
	
	while low <= high:
		middle_index = (high + low) // 2
		
		if array_list[middle_index] == number:
			return middle_index
			
		if array_list[middle_index] > number:
			high = middle_index - 1
			
		else:
			low = middle_index - 1
	
	return -1
	
	
		




def main():
	
	array = [2, 3, 4, 7, 10, 13, 17, 21, 24, 29, 35, 37, 40, 57]
	x = 29
	result = binary_search(array, x)
	
	if result == -1:
		print(f"Integer is not present in the array")
	else:
		print(f"Integer is present at index {result}")


if __name__ == "__main__":
	main()