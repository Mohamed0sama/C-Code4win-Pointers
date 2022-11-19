#include "stdio.h"
#define size 10
int main(void) {
	int arr[size]={1, 2, 3, 4, 5, 6, 6, 6, 3,7};
	int count = 0;
	int dupCount = 0;
	for (int i = 0; i < size; i++) {
		for ( int j = i+1; j < size; j++) {
			if (arr[i] == arr[j]) {
				count++;
				break;
			}
		}
	}
	printf("Duplicate items = %d", count);
}
