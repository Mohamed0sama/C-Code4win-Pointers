#include "stdio.h"

swaparr(int* arr, int* arr1, int array_size) {
	for (int i = 0; i < array_size; i++) {
		arr[i] = arr[i] ^ arr1[i];
		arr1[i] = arr[i] ^ arr1[i];
		arr[i] = arr[i] ^ arr1[i];
	}
}
printarr(int* arr, int* arr1, int array_size) {
	printf("Array 1\n");
	for (int i = 0; i < array_size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("Array 2\n");
	for (int i = 0; i < array_size; i++) {
		printf("%d ", arr1[i]);
	}

}
void main(void) {
	int arr[]={1,2,3,4,5};
	int arr1[] = { 6,7,8,9,10 };
	int i;
	int array_size = sizeof(arr) / sizeof(arr[0]);
	int* ptr1 = arr;
	int* ptr2 = arr1;
	printf("\t\tBefore Swap\n");
	printarr(arr, arr1, array_size);
	swaparr(arr, arr1,array_size);
	printf("\n\t\tAfter Swap\n");
	printarr(arr, arr1, array_size);

}
