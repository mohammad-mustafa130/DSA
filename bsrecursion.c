#include<stdio.h>
#include<stdlib.h>

void bubbleSort(int *a, int len){
	int i, temp;
	if(len == 1) return;
	for(i=1; i<len; i++){
		if(a[i] < a[i-1]){
			temp = a[i];
			a[i] = a[i-1];
			a[i-1] = temp;
		}
	}
	bubbleSort(a, len - 1);
}
void printArray(int *a, int len){
	int i;
	for(i=0; i<len; i++){
		printf("%d\t", a[i]);
	}
	printf("\n");
}
int main(int argc, char** argv){
	int arr[] = {3, 6, 1, 8, 4, 9, 5};
	int len = sizeof(arr)/sizeof(arr[0]);

	printf("Unsorted Array: \n");
	printArray(arr, len);

	bubbleSort(arr, len);

	printf("Sorted Array: \n");
	printArray(arr, len);

	return 0;
}
