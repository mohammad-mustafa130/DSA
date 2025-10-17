#include<stdio.h>
void swap(int *a, int *b);

void selectionSort(int *a, int len, int i){
	int j,min;
	if(i == len - 1) return;

	min = i;
	for(j=i+1; j<len; j++){
		if(a[j] < a[min]){
			min = j;
		}
	}
	swap(&a[i], &a[min]);
	selectionSort(a, len, i+1);
}
void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void printArray(int* a, int len){
	int i;
	for(i=0; i<len; i++){
		printf("%d\t", a[i]);
	}
	printf("\n");
}
int main(int argc, char** argv){
	int arr[] = {3,6,1,8,4,9};
	int len = sizeof(arr)/sizeof(arr[0]);

	printf("Unsorted Array: \n");
	printArray(arr, len);

	selectionSort(arr, len, 0);

	printf("Sorted Array: \n");
	printArray(arr, len);

	return 0;
}
