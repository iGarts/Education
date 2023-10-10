#include <stdio.h>

int main()
{
    const int counter = 5;
    char var = '$';
    int i, j;
    for (i = 0; i < counter; i++)
    {
        for (j = 0; j < i + 1; j++)
            printf("%c", var);
        printf("\n");
    }

    return 0;
}