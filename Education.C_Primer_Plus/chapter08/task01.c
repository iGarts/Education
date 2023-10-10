#include <stdio.h>

int main(void)
{
    int ch, i = 0;
    printf("Lets go!\n");
    while ((ch = getchar()) != EOF)
    {
        putchar(ch);
        if (ch != ' ' && ch != '\n' && ch != '\t')
            i++;
    }
    printf("%d\n", i);
    printf("see you next time");

    return 0;
}