#include <stdio.h>

int sum_sqrd(int x, int y);

int main()
{
    int min, max;

    printf("Enter a lower case:");
    scanf("%d", &min);
    printf("Enter a upper case:");
    scanf("%d", &max);
    while (min <= max)
    {
        printf("%d\n", sum_sqrd(min, max));
        printf("Enter a lower case:");
        scanf("%d", &min);
        printf("Enter a upper case:");
        scanf("%d", &max);
    }

    return 0;
}

int sum_sqrd(int x, int y)
{
    int i, j;
    int sum = 0;
    for (i = x; i <= y; i++)
    {
        sum = sum + i * i;
    }

    return sum;
}