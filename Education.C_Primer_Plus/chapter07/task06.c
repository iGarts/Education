#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c, ch1, ch2;
    char array[2];
    int i = 0, j = 0;
    while ((c = getchar()) != '#')
    {
        putchar(c);
        if (c == 'e')
            ch1 = c;
        else if (ch1 == 'e' && c == 'i')
            i++;
    }
    printf("\n%d\n", i);

    return 0;
}