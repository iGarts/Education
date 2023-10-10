#include <stdio.h>

void printchar(char);

int main(void)
{
    int c, i = 0;
    while ((c = getchar()) != EOF)
    {
        i++;
        printchar(c);
        //if (i % 10 == 0)
        //  printf("\n");
    }
    printf("see you next time");

    return 0;
}

void printchar(char c)
{
    if (c == '\n')
        printf("\\n");
    else if (c == '\t')
        printf("\\t");
    else
        printf("%d", c);
}