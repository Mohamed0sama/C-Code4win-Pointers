#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i, size, pos;

    printf("Enter size of the array : ");
    scanf_s("%d", &size);
    printf("Enter elements in array : ");

    for (i = 0; i < size; i++)
    {
        scanf_s("%d", &arr[i]);
    }

    printf("Enter the element position to delete: ");
    scanf_s("%d", &pos);

    if (pos < 0 || pos > size)
    {
        printf("Invalid position!", size);
    }
    else
    {
        for (i = pos - 1; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
        for (i = 0; i < size; i++)
        {
            printf("%d\t", arr[i]);
        }
    }
}
