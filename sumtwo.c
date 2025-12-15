#include<stdio.h>
int main() {
	int n, i, count = 1, sum = 0;
	printf("Enter number: ");
	scanf("%d", &n);
	while(count <= n) {
		sum +=  count;
		count++;
	}
	printf("Sum of first %d numbers: %d\n", n, sum);
	return 0;
}
