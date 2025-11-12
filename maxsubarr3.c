#include<stdio.h>
int maxsubarray(int *a, int len) {
        int msf = 0, meh = 0;
        int i, temp;
        for(i=0; i<len; i++) {
                temp = meh + a[i];
		meh = (temp > 0) ? temp : 0;
		msf = (meh > msf) ? meh : msf;
        }
        return msf;
}

void printArray(int *a, int len) {
        int i;
        for(i=0; i<len; i++) {
                printf("%d\t", a[i]);
        }
        printf("\n");
}

int main(int argc, char** argv) {
        int arr[] = {13, -3, -25, 20, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7};
        int len = sizeof(arr)/sizeof(arr[0]);

        printf("Original Array: \n");
	printArray(arr, len);

        int result = maxsubarray(arr, len);

        printf("Maximum subarray = %d\n", result);
        return 0;
}



