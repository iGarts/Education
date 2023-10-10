#include <stdio.h>

int main()
{
    int array[8];
    int i, j = 1;
    for (i = 0; i < 8; i++)
    {
        j = j * 2;
        array[i] = j;
    }
    i = 0;
    do
    {
        printf("[%3d]", array[i++]);
    } while (i < 9);

    return 0;
}