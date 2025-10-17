#include<stdio.h>
void insertionSort(int *a, int len){
	if(len <= 1) return;

	insertionSort(a, len - 1);

	int last = a[len - 1];
	int j = len - 2;

	while(j>=0 && a[j] > last){
		a[j+1] = a[j];
		j--;
	}
	a[j+1] = last;

}
void printArray(int *a, int len){
	int i;
	for(i=0; i<len; i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
}
int main(int argc, char** argv){
	int arr[] = {4,3,7,8,6,9,2,1};
	int len = sizeof(arr)/sizeof(arr[0]);

	printf("Unsorted Array: \n");
	printArray(arr, len);

	insertionSort(arr, len);

	printf("Sorted Array: \n");
	printArray(arr, len);

	return 0;
}
