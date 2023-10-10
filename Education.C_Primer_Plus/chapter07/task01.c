#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    int i = 0;
    int space = 0, ns = 0;
    while ((ch = getchar()) != '#')
    {
        ch = tolower(ch);
        if (ch >= 'a' && ch <= 'z')
            i++;
        else if (isspace(ch))
            space++;
        if (ch == '\n')
            ns++;
    }
    printf("You enter  %d letters, %d spaces and %d new strings", i, space, ns);

    return 0;
}