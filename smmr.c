#include<stdio.h>
#define N 3
void smmr(int i, int j, int k, int a[N][N], int b[N][N], int c[N][N]){
	if(i >= N) return;
	if(j >= N) {
		smmr(i+1, 0, 0, a, b, c);
		return;
	}
	if(k < N) {
		c[i][j] += a[i][k] * b[k][j];
		smmr(i, j, k+1, a, b, c);
	} else {
		 smmr(i, j+1, 0, a, b, c);
	}
}
void printArray(int row, int col, int a[row][col]){
	int i,j;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
int main(int argc, char** argv){
	int td[3][3] = {{2,5,8},{1,9,4},{3,6,7}};
	int sd[3][3] = {{4,6,1},{5,0,2},{9,6,3}};
	int result[3][3];

	int row = sizeof(td)/sizeof(td[0]);
	int col = sizeof(td[0])/sizeof(td[0][0]);

	printf("First Matrix: \n");
	printArray(row, col, td);

	printf("Second Matrix: \n");
	printArray(row, col, sd);

	smmr(0, 0, 0, td, sd, result);

	printf("Matrix after multiplication: \n");
	printArray(row, col, result);

	return 0;
}
