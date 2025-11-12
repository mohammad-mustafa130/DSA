def radixSort (a, len):
	numlen = 0
	quo = 0
	max = a[0]
	for i in range(1, len):
		if max < a[i]:
			max = a[i]
	while max != 0:
		numlen += 1
		max = max // 10
	for i in range(1, numlen+1):
		countingSort (a, len, i)

def countingSort (A, len, pos):
	c = []
	for i in range(0, 10):
		c.append(0)
	B = []
	for j in range(0, len):
		B.append(0)
	for i in range(0, len):
		p = 0
		q = A[i]
		for j in range (1, pos+1):
			p = q % 10
			q = q // 10
		c[p] += 1
	for i in range(1, 10):
		c[i] = c[i] + c[i-1]
	for j in range(len-1, -1, -1):
		p = 0
		q = A[j]
		for k in range(1, pos+1):
			p = q % 10
			q = q // 10
		B[c[p] - 1] = A[j]
		c[p] -= 1
	for i in range(0, len):
		A[i] = B[i]

li = [ 21, 415, 0, 312, 812, 561, 2 ]
print("Original list: ", li)

length = len(li)

radixSort(li, length)

print("Sorted List: ",li) 
