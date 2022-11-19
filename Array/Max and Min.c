#include "stdio.h"
#include "STD_Types.h"
#define ArraySize 5
int main(void) {
	sint32 arr[ArraySize] = { 1,2,3,4,5 };
	uint8 u8Ctr;
	sint32 Max = arr[1], Min = arr[1];
	for (u8Ctr = 0; u8Ctr < ArraySize; u8Ctr++) {
		if (arr[u8Ctr] > Max) {
			Max = arr[u8Ctr];
		}
		else if (arr[u8Ctr] < Min) {
			Min = arr[u8Ctr];
		}
	}
	printf("Maximum = %d, Minimum = %d", Max, Min);
}
