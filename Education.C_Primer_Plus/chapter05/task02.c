#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number:\n");
    scanf("%d", &number);
    while (number < 15)
    {
        printf("%d  ", number);
        number++;
    }
    return 0;
}