#include <stdio.h>

void chline(char, int, int);

int main()
{
    int var1, var2;
    char ch;
    printf("  Enter a symbol and 2 int numbers: ");
    scanf(" %c %d %d", &ch, &var1, &var2);
    chline(ch, var1, var2);

    return 0;
}

void chline(char c, int a, int b)
{
    int i = 0, j = 0;
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= b; j++)
            printf("%c", c);
        putchar('\n');
    }
}