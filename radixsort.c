#include<stdio.h>
void countingSort (int*, int, int);
void printArray (int*, int);

void radixSort (int *a, int len) {
	int numlen = 0; int quo = 0;
	int max = a[0];
	int i;
	for (i = 1; i < len; i++) {
		if (max < a[i]) max = a[i];
	}
	while (max != 0) {
		numlen++;
		max = max / 10;
	}
	for (i = 1; i <= numlen; i++) {
		countingSort (a, len, i);
	}
}
int main() {
	int a[] = { 213, 415, 253, 312, 812, 561, 287 };
	int length = sizeof(a) / sizeof(a[0]);
	printf("Unsorted Array: \n");
	printArray(a, length);

	radixSort(a, length);

	printf("Sorted Array: \n");
	printArray(a, length);

	return 0;
}
void printArray (int *a, int len) {
	int i;
	for (i = 0; i < len; i++) {
		printf("%d\t", a[i]);
	}
	printf("\n");
}
void countingSort (int *A, int len, int pos) {
	int i, j, k;
	int c[10] = { 0 };
	int B[len];
	for ( i = 0; i < len; i++) {
		B[i] = 0;
	}
	for (i = 0; i < len; i++) {
		int p = 0; int q = A[i];
		for (j = 1; j <= pos; j++) {
			p = q % 10;
			q = q / 10;
		}
		c[p]++;
	}
	for (i = 1; i < 10; i++) {
		c[i] = c[i] + c[i - 1];
	}
	j = len - 1;
	for (j = len - 1; j >= 0; j--) {
		int p = 0; int q = A[j];
		for(k = 1; k <= pos; k++) {
			p =  q % 10;
			q = q / 10;
		}
		B[c[p] - 1] = A[j];
		c[p]--;
	}
	for (i = 0; i < len; i++) {
		A[i] = B[i];
	}
}

