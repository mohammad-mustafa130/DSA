def partition(A, p, r):
	x = A[r]
	i = p - 1

	for j in range(p, r):
		if A[j] <= x:
			i = i + 1
			A[i], A[j] = A[j], A[i]

	A[i+1], A[r] = A[r], A[i+1]
	return i + 1

def quickSort(A, p, r):
	if p < r:
		q = partition(A, p, r)
		quickSort(A, p, q - 1)
		quickSort(A, q + 1, r)

L = [5, 8, 2, 3, 4, 10, 50, 38, 24]
print(L)
quickSort(L, 0, len(L) - 1)
print(L) 
