def partition(A, p, r):
	x = A[p]
	i = p
	j = r

	while i < j:
		while i<j and A[j] >= x:
			j = j - 1
		while i<j and A[i] <= x:
			i = i + 1
		if i < j:
			A[i], A[j] = A[j], A[i]
	A[p], A[j] = A[j], A[p]
	return j

def quickSort(A, p, r):
	if p < r:
		q = partition(A, p, r)
		quickSort(A, p, q - 1)
		quickSort(A, q + 1, r)

L = [5, 8, 2, 3, 4, 10, 50, 38, 24]
print(L)
quickSort(L, 0, len(L) - 1)
print(L)
