#include<stdio.h>
void printArray(int, int, int(*)[]);
void sumArray(int, int, int(*)[], int(*)[], int(*)[]);

int main(int argc, char** argv){
	int td[3][4] = {{2,4,6,8},{1,3,9,5},{7,8,10,15}};
	int sd[3][4] = {{8,2,4,1},{3,2,6,1},{2,5,8,2}};
	int result[3][4];

	int row = sizeof(td)/sizeof(td[0]);
	int col = sizeof(td[0])/sizeof(td[0][0]);
	
	printf("First Matrix: \n");
	printArray(row,col,td);

	printf("\nSecond Matrix: \n");
	printArray(row,col,sd);

	sumArray(row, col, td, sd, result); 

	printf("\nAddition of two matrix: \n");
	printArray(row, col, result);
	return 0;
}
void printArray(int row, int col, int a[row][col]){
	int i,j;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
void sumArray(int row, int col, int a[row][col], int b[row][col], int c[row][col]){
	int i,j;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			c[i][j] = a[i][j]+b[i][j];
		}
	}
}
