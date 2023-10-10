#include <stdio.h>

int main()
{
    const int rows = 6;
    const int chars = 6;
    char c = 'A';
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < i + 1; j += 1)

            printf("%c", c++);
        printf("\n");
    }

    return 0;
}