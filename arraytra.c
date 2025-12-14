#include<stdio.h>
int main() {
	int n, i, pos, element;
	int arr[50];
	printf("Enter size of array: ");
	scanf("%d", &n);
	printf("Enter elements of array: ");
	for(i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	printf("Elements in array are: ");
	for(i=0; i<n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
