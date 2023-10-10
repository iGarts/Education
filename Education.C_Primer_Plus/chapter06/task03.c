#include <stdio.h>

int main()
{
    const int rows = 6;
    const int chars = 6;
    char c = 'F';
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < i + 1; j++)

            printf("%c", c - j);
        printf("\n");
    }

    return 0;
}