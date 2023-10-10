#include <stdio.h>

int main()
{
    const int size = 26;
    int i = 0;
    char array[size];
    char ch;
    for (i = 0, ch = 'A'; i < size; i++, ch++)
    {
        array[i] = ch;
        printf("[%2c]", array[i]);
    }

    return 0;
}
