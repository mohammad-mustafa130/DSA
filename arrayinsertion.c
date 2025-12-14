#include<stdio.h>
int main() {
	int arr[50], n, i, pos, num;
	printf("Enter size of array: ");
	scanf("%d", &n);

	printf("Enter elements of array: ");
	for(i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	printf("Enter the position where element has to be inserted: ");
	scanf("%d", &pos);

	printf("Enter the element to be inserted: ");
	scanf("%d", &num);

	for(i=n; i>pos; i--) {
		arr[i] = arr[i-1];
	}
	arr[pos] = num;
	printf("Array after insertion: ");
	for(i=0; i<n+1; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
