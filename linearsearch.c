/* Linear Search */

#include<stdio.h>
int linearsearch(int *a, int len, int data){
	int flag = -1;
	int i;
	for(i=0; i<len; i++){
		if(a[i] == data){
			flag = i;
			break;
		}
	}
	return flag;
}
int main(int argc, char** argv){
	int arr[] = {3,5,2,8,15,18,29,6,4};
	int length = sizeof(arr)/sizeof(arr[0]);
	int data;
	printf("Enter data to be searched\n");
	scanf("%d", &data);
	int result = linearsearch(arr, length, data);
	if(result == -1) printf("Element not found\n");
	else printf("Element found at %d\n", result);

	return 0;
}
