#include "stdio.h"


void summation(int *x,int *y,int *sum) {
	*sum = *x + *y;
}

void main(void) {
	int x = 5, y = 6, sum;
	summation(&x, &y, &sum);
	printf("%d", sum);
}
