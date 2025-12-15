#include<stdio.h>
int main() {
	int arr[50], n, i, pos;
	printf("Enter size of array: ");
	scanf("%d", &n);

	printf("Enter elements of array: ");
	for(i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	printf("Array before deletion: ");
	for(i=0; i<n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	printf("Enter the position from where element has to be deleted: ");
	scanf("%d", &pos);

	for(i=pos-1; i<n-1; i++) {
		arr[i] = arr[i+1];
	}
	n--;
	printf("Array after deletion: ");
	for(i=0; i<n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
