#include<stdio.h>
int linearSearch(int *a, int len, int data, int i){
	if (i == len) return -1;

	if (a[i] == data) return i;

	return linearSearch(a, len, data, i+1);
}
int main(int argc, char** argv){
        int arr[] = {3,5,2,8,15,18,29,6,4};
        int length = sizeof(arr)/sizeof(arr[0]);

        int data;
        printf("Enter data to be searched\n");
        scanf("%d", &data);

        int result = linearSearch(arr, length, data, 0);

        if(result == -1) printf("Element not found\n");
        else printf("Element found at %d\n", result);

        return 0;
}

