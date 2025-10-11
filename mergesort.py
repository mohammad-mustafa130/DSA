import sys

INT_MAX = sys.maxsize


def merge(a, si, mid, li):
	n1 = mid - si + 1
	n2 = li - mid
	left = []
	right = []
	for i in range(n1):
		left.append(a[si + i])
	
	for j in range(n2):
		right.append(a[mid + j + 1])
		

	left.append(INT_MAX)
	right.append(INT_MAX)

	i = j = 0
	
	for k in range(si, li  + 1):
		if left[i] <= right[j]:
			a[k] = left[i]
			i += 1
		else:
			a[k] = right[j]
			j += 1

def mergeSort(a, si, li):
	if si < li:
		mid = (si + li) // 2
		mergeSort(a, si, mid)
		mergeSort(a, mid + 1, li)
		merge(a, si, mid, li)

def printArray(a):
	for i in a:
		print(f"{i}", end=" ")
	
	print()

def main():
	a = [7,4,5,3,2,8,6,1]
	print("Unsorted Array: ", end="")
	printArray(a)

	mergeSort(a, 0, len(a) - 1)
	
	print("Sorted Array: ", end="")
	printArray(a)


if __name__ == "__main__":
	main()
