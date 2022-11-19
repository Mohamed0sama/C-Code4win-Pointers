#include "stdio.h"
#define ArraySize 5

int main(void) {
	int arr[ArraySize];
	int i;
	printf("Please enter Array Elements\n");
	for (i = 0; i < ArraySize; i++) {
		scanf_s("%d", &arr[i]);
	}

	for (i = 0; i < ArraySize; i++) {
		printf("%d ", arr[i]);
	}
}
