#include <stdio.h>

int main()
{
    char ch;
    int counter = 0;
    while ((ch = getchar()) != '#')
    {
        if (ch == '.')
        {
            printf("!");
            counter++;
        }
        else
            //putchar(ch);
            if (ch == '!')
        {
            printf("!");
            counter++;
        }
        //else
        //  putchar(ch);
    }
    printf("%d\n", counter);
}