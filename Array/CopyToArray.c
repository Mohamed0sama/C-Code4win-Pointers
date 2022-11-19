#include <stdio.h>
#define MAX_SIZE 5

int main()
{
    int arr[MAX_SIZE] = { 1,-5,-2,-3,5 };
    int arr1[MAX_SIZE];
    for (int i = 0; i < MAX_SIZE; i++) {
        arr1[i] = arr[i];
    }
    for (int i = 0; i < MAX_SIZE; i++) {
        printf("%d ", arr1[i]);
    }
    return 0;
}
