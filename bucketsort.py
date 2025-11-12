def bucketSort(A):
	B = []
	for i in range (10):
		B.append(None)
	for i in range (len(A)):
		j = int(10 * A[i])
		if B[j] == None:
			temp = []
			temp.append(A[i])
			B[j] = temp
		else:
			B[j].append(A[i])
	for i in range (10):
		if B[i] != None:
			insertionSort(B[i])
	k = 0
	for i in range (10):
		if B[i] != None:
			for j in range (len(B[i])):
				A[k] = B[i][j]
				k = k + 1
def insertionSort(A):
	for j in range (1, len(A)):
		key = A[j]
		i = j - 1
		while i >= 0 and A[i] > key:
			A[i + 1] = A[i]
			i = i - 1
		A[i + 1] = key

li = [0.5, 0.2, 0.27, 0.31, 0.8, 0.89, 0.9, 0.7]
print("Original list: ")
print(li)
 
bucketSort(li)

print("Sorted list: ")
print(li)


