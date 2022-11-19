#include <stdio.h>
#define MAX_SIZE 5

int main()
{
    int arr[MAX_SIZE]={1,-5,-2,-3,5}, i;
    int count = 0;
    int even = 0, odd = 0;
    for (int i = 0; i < MAX_SIZE; i++) {
        if (arr[i] < 0) {
            count++;
        }
    }
    printf("There are %d Negative Elements\n", count);
    return 0;
}
