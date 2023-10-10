#include <stdio.h>

int main(void)
{
    int i = 0;
    char c;
    while ((c = getchar()) != '#')
    {
        switch (c)
        {
        case '.':
            printf("!");
            i++;
            break;
        case '!':
            printf("!!");
            i++;
            break;

        default:
            putchar(c);
            break;
        }
    }
    printf("%d\n", i);

    return 0;
}