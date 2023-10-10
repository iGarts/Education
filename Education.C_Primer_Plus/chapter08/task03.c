#include <stdio.h>

int charcount(int c);

int main()
{
    int c;
    int i = 0;

    int upper = 0, lower = 0, rest = 0;
    while ((c = getchar()) != EOF)
    {
        if (c >= 97 && c <= 122)
            lower++;
        else if (c >= 65 && c <= 90)
            upper++;
        else if (c == ' ' && c == '\n' && c == '\t')
            rest = rest;
        else
            rest++;
    }
    printf("Uppers: %d \nLowwers: %d \nRest: %d\n", upper, lower, rest);
    return 0;
}
