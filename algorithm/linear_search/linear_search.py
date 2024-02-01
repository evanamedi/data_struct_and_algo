
def main():

	list_of_numbers = [10, 20, 30, 40, 50]
	number = 30
	
	result = linear_search(list_of_numbers, number)
	
	if result != -1:
		print(f"Integer is present at index {result}")
	else:
		print("Integer is not present in array")



def linear_search(number_list: list, number: int):

	current_index = 0
	for i in number_list:
		if i == number:
			return current_index
		current_index += 1
		
	return -1



if __name__ == "__main__":
	main()