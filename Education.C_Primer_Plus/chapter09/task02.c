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
    int i;
    for (i = a; i <= b; i++)
        printf("%4c", c);
    putchar('\n');
}