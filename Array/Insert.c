#include <stdio.h>
#define MAX_SIZE 100

int main(void)
{
    int arr[MAX_SIZE];
    int i, size, num, pos;

    printf("Enter size of the array : ");
    scanf_s("%d", &size);

    printf("Enter elements in array : ");
    for (i = 0; i < size; i++)
    {
        scanf_s("%d", &arr[i]);
    }

    printf("Enter element to insert : ");
    scanf_s("%d", &num);
    printf("Enter the element position : ");
    scanf_s("%d", &pos);

    if (pos > size + 1 || pos <= 0)
    {
        printf("Invalid position! Please enter position between 1 to %d", size);
    }
    else
    {
        for (i = size; i >= pos; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = num;
        size++;
        printf("Array elements after insertion : ");
        for (i = 0; i < size; i++)
        {
            printf("%d\t", arr[i]);
        }
    }

}
