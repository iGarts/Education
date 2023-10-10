#include <stdio.h>
#include <ctype.h>

float foo(int c);

int main()
{
    int c;
    int i = 0, j = 0;
    while ((c = getchar()) != EOF)
    {
        putchar(c);
        i++;
        if ((isspace(c)) == 1 || c == '\n')
        {
            j++;
            i--;
        }
    }
    printf("%d  %d\n", i, j);
    printf("Averege letters in words: %f\n", (float)i / j);
}