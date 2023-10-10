#include <stdio.h>
#include <string.h>
#define SIZE 10

char *array_write(char *arr);

int main(void)
{
    char array[SIZE];
    array_write(array);
    puts(array);

    return 0;
}

char *array_write(char *arr)
{
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = getchar();
        if (arr[i] == ' ' || arr[i] == '\n')
        {
            arr[i] = '\0';
            break;
        }
    }
    while (getchar() != '\n')
        continue;

    return arr;
}