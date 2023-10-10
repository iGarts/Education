#include <stdio.h>

void putlower(int);
void puthigher(int);

int main()
{
    int user_input;
    while ((user_input = getchar()) != EOF)
    {
        if (user_input > 'a' && user_input < 'z')
            putlower(user_input);
        else if (user_input > 'A' && user_input < 'Z')
            puthigher(user_input);
        else
            putchar(user_input);
    }

    return 0;
}

void putlower(int input)
{
    int c = input - 97;
    printf("%d", c + 1);
}

void puthigher(int input)
{
    int c = input - 65;
    printf("%d", c + 1);
}