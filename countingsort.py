def countingSort(A, B, k):
	c = []
	for i in range(0, k+1):
		c.append(0)
	for j in range(0, len(A)):
		c[A[j]] = c[A[j]] + 1
	for i in  range(1, k+1):
		c[i] = c[i] + c[i-1]
	j = len(A) - 1
	while j >= 0:
		B[c[A[j]]-1] = A[j]
		c[A[j]] = c[A[j]] - 1
		j = j - 1

list1 = [ 3, 2, 4, 5, 2, 4, 1, 0, 5]
list2 = list([0, 0, 0, 0, 0, 0, 0, 0, 0])
print(list1)
countingSort(list1, list2, 5)
print(list2)
