#include "stdio.h"

#define row 2
#define column 2


print_Array(int (* matrix)[column], int rows, int columns) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
}

void enter_Array(int matrix[][column], int rows, int columns) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			scanf_s("%d", &matrix[i][j]);
		}
	}
}
void summation(int matrix[][column], int matrix1[][column], int sum[][column],int rows,int columns) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			sum[i][j] = matrix[i][j] + matrix1[i][j];
		}
	}
}

void main(void) {
	int matrix[row][column];
	int matrix1[row][column];
	int sum[row][column];
	printf("enter first matrix\n");
	enter_Array(matrix, row, column);
	print_Array(matrix, row, column);
	printf("enter second matrix\n");
	enter_Array(matrix1, row, column);
	print_Array(matrix, row, column);
	printf("Sum of two matrix = \n");
	summation(matrix, matrix1, sum, row, column);
	print_Array(sum, row, column);
}
