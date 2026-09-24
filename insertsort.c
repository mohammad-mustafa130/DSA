#include<stdio.h>
void insertionSort(int* arr, int len) {
	for(int i = 0; i < len; i++) {
		int key = arr[i];
		int j = i - 1;

		while(j >= 0 && arr[j] > key) {
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}
void printArray(int* arr, int len) {
	for(int i = 0; i < len; i++) {
		printf("%d\t", arr[i]);
	}
	printf("\n");
}
int main() {
	int arr[] = {7,3,5,4,2,6};
	int len = sizeof(arr) / sizeof(arr[0]);

	printf("Original Array: \n");
	printArray(arr, len);

	insertionSort(arr, len);

	printf("Sorted Array: \n");
	printArray(arr,len);
}
