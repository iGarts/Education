#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int count = 0;
    char ch;
    while ((ch = getchar()) != '#')
    {
        count++;
        printf("%c %d ", ch, ch);
        if (count % 8 == 0)
            printf("\n");
    }

    return 0;
}