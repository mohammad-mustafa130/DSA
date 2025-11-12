def insertionSort(li, length):
	for j in range(1, length):
		key = li[j]
		i = j - 1
		while i >= 0 and li[i] > key:
			li[i + 1] = li[i]
			i = i - 1
		li[i + 1] = key

li = [4, 7, 3, 8, 6, 9, 2, 1]

print("Original list: ")
print(li)

insertionSort(li, len(li))

print("Sorted list: ")
print(li)
