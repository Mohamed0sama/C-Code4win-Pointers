#include <stdio.h>
#define SIZE 3


void scan_2d_arr(int ptr[][SIZE])
{
	int i, j;
	for (i = 0; i < SIZE; i++)
	{
		printf("Enter row number %d :",i+1);
		for (j = 0; j < SIZE; j++)
		{
			scanf_s("%d", &ptr[i][j]);
		}
	}
}
void print_2d_arr(int ptr[][SIZE])
{
	printf("The elements of arr :\n");

	int i, j;
	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			printf("%d ", *(*(ptr + i) + j));
		}
		printf("\n");
	}
}
void product_2d_arr(int ptr[][SIZE], int num) {
	int i, j;
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {
			ptr[i][j] = num * ptr[i][j];
		}
	}
}


int main()
{
	int arr[SIZE][SIZE];
	int scalarProduct;
	printf("Enter the scalar product factor\n");
	scanf_s("%d", &scalarProduct);
	scan_2d_arr(arr);
	product_2d_arr(arr, scalarProduct);
	print_2d_arr(arr);
	return 0;
}
