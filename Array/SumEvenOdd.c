#include <stdio.h>
#define MAX_SIZE 5

int main()
{
    int arr[MAX_SIZE]={1,2,3,4,5}, i;
    int even = 0, odd = 0;
    for (int i = 0; i < MAX_SIZE; i++) {
        if (arr[i] % 2 == 0) {
            even = even + arr[i];
        }
        else if (arr[i] % 2 != 0) {
            odd = odd + arr[i];
        }
    }
    printf("Even = %d, odd =  %d", even, odd);
    return 0;
}
