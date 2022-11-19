#include "stdio.h"

int main(void) {
	int arr[11]={1, 2, 3, 4, 5, 5, 6, 6, 6, 3, 2};
	int freq[11]={0};
	for (int i = 0; i < 11; i++) {
		freq[arr[i]]++;
	}
	for (int i = 0; i < 11; i++) {
		printf("%d ", freq[i]);
	}
}
