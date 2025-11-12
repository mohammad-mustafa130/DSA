#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int* fmcs(int* a, int low, int mid, int high) {
	int* result = (int*)calloc(3, sizeof(int));
	int lsum = -INT_MAX;
	int rsum = -INT_MAX;
	int i, j, mleft, mright;
	int sum = 0;

	for(i = mid; i >= low; i--) {
		sum += a[i];
		if(sum > lsum) {
			lsum = sum;
			mleft = i;
		}
	}
	sum = 0;
	for(j = mid + 1; j <= high; j++) {
		sum += a[j];
		if(sum > rsum) {
			rsum = sum;
			mright += j;
		}
	}
	result[0] = mleft;
	result[1] = mright;
	result[2] = lsum + rsum;
	return result;
}

int* findmaxsubarray(int* a, int low, int high) {
	int* result = (int*)calloc(3, sizeof(int));
	if(high == low) {
		result[0] = low;
		result[1] = high;
		result[2] = a[low];
		return result;
	} else {
		int mid = (low + high) / 2;
		int *dl = findmaxsubarray(a, low, mid);
		int *dr = findmaxsubarray(a, mid + 1, high);
		int *c = fmcs(a, low, mid, high);

		if((dl[2] >= dr[2]) &&  (dl[2] >= c[2])) {
			return dl;
		} else if((dr[2] >= dl[2]) && (dr[2] >= c[2])) {
			return dr;
		} else  {
			return c;
		}
	}
}

int main(int argc, char** argv) {
	int arr[] = {4, -6, 2, -9, 1, 5};
	int len = sizeof(arr) / sizeof(arr[0]);

	int low = 0;
	int high = len - 1;

	int* result = findmaxsubarray(arr, low, high);

	printf("Maximum subarray = %d\n", result[2]);

	return 0;
}
