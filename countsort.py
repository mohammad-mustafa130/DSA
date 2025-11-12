def countingSort(A, k):
	c = []
	for i in range(0, k+1):
		c.append(0)

	for j in A:
		c[j] += 1

	index = 0
	for i in range (len(c)):
		while c[i] > 0:
			A[index] = i
			index += 1
			c[i] -= 1

list = [3, 2, 4, 5, 2, 4, 1, 0, 5]
print("Original: ", list)

countingSort(list, 5)

print("Sorted: ", list)

