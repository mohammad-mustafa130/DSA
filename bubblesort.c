/* Bubble Sort */
#include<stdio.h>
void bubblesort(int* a, int len){
	int flag = 0;
	int i,j,temp;
	for(i=1; i<len; i++){
		flag = 0;
		for(j=1; j<len-i+1; j++){
			if(a[j-1] > a[j]){
				flag++;
				temp = a[j-1];
				a[j-1] = a[j];
				a[j] = temp;
			}
		}
		if (flag == 0) break;
	}
}
int main(int argc, char** argv){
	int i;
	int arr[] = {5,2,3,4};
	int length = sizeof(arr)/sizeof(arr[0]);
	bubblesort(arr,length);
	printf("Sorted Array: ");
	for(i=0; i<length; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
