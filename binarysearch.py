def binarySearch(li, left, right, key):
	while left <= right:
		mid = (left + right) // 2
		if key == li[mid]:
			return mid
		elif key < li[mid]:
			 right = mid - 1
		else:
			left = mid + 1
	return -1

def main():
	li = [2, 4, 6, 8, 10, 12, 14, 16, 18, 20]
	length = len(li)
	left = 0
	right =  length - 1
	key = int(input("Enter data to be searched: "))
	result = binarySearch(li, left, right, key)
	if result == -1:
		print("Element not found")
	else:
		print(f"Element found at {result}")

if __name__ ==  "__main__":
	main()
