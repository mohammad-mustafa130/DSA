#include<stdio.h>
int main() {
	int n, i;
	printf("Enter number: ");
	scanf("%d", &n);

	for(i=2; i<=n-1; i++) {
		if(n % i == 0) {
			printf("%d is a prime no. \n", n);
		}
		if(n % i != 0) {
			printf("%d is not a prime no. \n", n);
		}
	}
	return 0;
}
