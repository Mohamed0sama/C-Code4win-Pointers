#include "stdio.h"

int search(int* arr, int array_size,int n) {
	for (int i = 0; i < array_size; i++) {
		if (arr[i] == n) {
			return i;
		}
	}
	return -1;
}

void main(void) {
	int arr[]={1,2,3,4,5};
	int array_size = sizeof(arr) / sizeof(arr[0]);
	int* ptr1 = arr;;
	int n;
	int result;
	scanf_s("%d", &n);
	result = search(arr, array_size,n);
	if (result != -1) {
		printf("found at index %d", result);
	}
	else
		printf("not found");
}
