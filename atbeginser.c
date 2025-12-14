#include<stdio.h>
int main() {
	int arr[50], n, num, i;
	printf("Enter size of array: ");
	scanf("%d", &n);

	printf("Enter the elements of array: ");
	for(i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	printf("Enter the elements to be inserted: ");
	scanf("%d", &num);
	for(i=n; i>0; i--) {
		arr[i] = arr[i-1];
	}
	arr[0] = num;
	printf("Array after insertion: ");
	for(i=0; i<n+1; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
} 
