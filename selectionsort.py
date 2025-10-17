def selectionSort(li, length):
	for i in range(length - 1):
		min = i
		for j in range(i+1, length):
			if li[j] < li[min]:
				min = j
		li[i], li[min] = li[min], li[i]

def main():
	li = [2, 4, 1, 9, 6]
	length = len(li)

	print("Unsorted Array: ")
	print(li)

	selectionSort(li, length)

	print("Sorted Array: ")
	print(li)

if __name__ == "__main__":
	 main()
