def linearSearch(li, length, data):
	flag = -1
	for i in range(length):
		if li[i] == data:
			flag = i
			break
	return flag

def main():
	li = [3, 5, 2, 8, 15, 18,29, 6, 4]
	length = len(li)

	data = int(input("Enter data to be searched: "))

	result = linearSearch(li, length, data)
	if result == -1: 
		print("Element not found")
	else:
		print(f"Element found at {result}")

if __name__ == "__main__":
	main() 
