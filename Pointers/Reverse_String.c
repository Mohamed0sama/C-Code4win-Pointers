
#include <stdio.h>
#define word_size 100

int main()
{
    char str[word_size], reverse[word_size];
    int i, strIndex, revIndex, len;
    gets(str);
    i = 0;
    while (str[i] != '\0') i++;
    len = i;
    revIndex = 0;
    strIndex = len - 1;
    while (strIndex >= 0)
    {
        reverse[revIndex] = str[strIndex];
        strIndex--;
        revIndex++;
    }
    reverse[revIndex] = '\0';
    printf("\nOriginal string = %s\n", str);
    printf("Reverse string = %s", reverse);

    return 0;
}
