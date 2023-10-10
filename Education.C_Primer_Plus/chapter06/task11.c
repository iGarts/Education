#include <stdio.h>

int main()
{
    int i, num, array[8];
    printf("Enter 8 numbers:");
    for (i = 0; i <= 7; i++)
        scanf("%d", &array[i]);
    for (i = 7; i >= 0; i--)
        printf("%2d", array[i]);

    return 0;
}