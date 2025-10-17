def bubbleSort(li, length):
	flag = 0
	for i in range(1, length):
		for j in range(1, length - i + 1):
			if li[j - 1] > li[j]:
				flag = flag + 1
				li[j-1], li[j] = li[j], li[j-1]
		if flag == 0:
			break
def main():
	li = [5, 2, 3, 4]
	length = len(li)
	print("Unsorted List: ")
	print(li)

	bubbleSort(li, length)

	print("Sorted List: ");
	print(li)

if __name__ == "__main__":
	main()
