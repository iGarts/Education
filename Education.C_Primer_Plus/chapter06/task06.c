#include <stdio.h>

int main()
{
    int min, max, sqrd, cube;
    printf("Enter a MIN:");
    scanf("%d", &min);
    printf("enter a MAX:");
    scanf("%d", &max);
    int i, j, k;
    printf(" ____________________\n");
    printf("|number| sqrd | cube |\n");
    for (i = min; i <= max; i++)
    {
        printf(" ____________________\n");
        printf("|%6d|%6d|%6d|\n", i, i * i, i * i * i);
    }
    printf(" ____________________\n");

    return 0;
}