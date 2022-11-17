#include "stdio.h"

int search(int* arr, int array_size,int n) {
	for (int i = 0; i < array_size; i++) {
		if (arr[i] == n) {
			return i;
		}
	}
	return -1;
}
printarr(int* arr, int array_size) {
	printf("Array 1\n");
	for (int i = 0; i < array_size; i++) {
		printf("%d ", arr[i]);
	}
}
void reverse(int* arr, int array_size) {
	int n = array_size;
	if (array_size % 2 == 0) {
		array_size = array_size / 2;
	}
	else
		array_size = (array_size - 1) / 2;

	for (int i = 0; i < array_size; i++) {
		arr[i] = arr[i] ^ arr[n-1-i];
		arr[n - 1 - i] = arr[i] ^ arr[n - 1 - i];
		arr[i] = arr[i] ^ arr[n - 1 - i];
	}
}

void main(void) {
	int arr[]={1,2,3,4,5};
	int array_size = sizeof(arr) / sizeof(arr[0]);
	int* ptr1 = arr;
	reverse(arr, array_size);
	printarr(arr, array_size);
}
