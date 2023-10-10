#include <stdio.h>

int main()
{
    int min = 1, max = 9;
    int i, j, k, ch;
    char start, end, letter;
    start = letter - 4;
    end = letter;

    printf("Enter a letter: \n");
    scanf("%c", &letter);
    printf("***********\n");
    for (ch = 0; ch < 5; ch++)
    {
        for (i = 5; i > ch; i--)
            printf(" ");
        for (j = letter - i; j < letter; j++)
            printf("%c", j);
        for (k = 0; k < i + 1; k++)
            printf("%c", letter - k);

        printf("\n");
    }
    printf("***********\n");

    return 0;
}