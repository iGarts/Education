#include <stdio.h>
#include <string.h>

int main()
{
    char word[20];
    int i, symb;
    printf("Enter any word:");
    scanf("%s", word);
    symb = strlen(word);
    for (i = symb; i >= 0; i--)
    {
        printf("%c", word[i]);
    }

    return 0;
}