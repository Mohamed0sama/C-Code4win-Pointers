#include "stdio.h"
#include "STD_Types.h"
#define ArraySize 5
int main(void) {
	sint32 arr[ArraySize] = { 1,-2,-5,3,-6 };
	uint8 u8Ctr;
	for (u8Ctr = 0; u8Ctr < ArraySize; u8Ctr++) {
		if (arr[u8Ctr] < 0) {
			printf("%d  ", arr[u8Ctr]);
		}
	}
}
