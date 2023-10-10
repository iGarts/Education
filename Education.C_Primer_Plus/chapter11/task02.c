#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 40

char *arr_add(char *arr);

int main(void)
{
    char array[SIZE];
    arr_add(array);
    puts(array);

    return 0;
}

char *arr_add(char *arr)
{
    int i = 0;
    char *array1;
    array1 = fgets(arr, SIZE, stdin);
    for (i = 0; i < SIZE; i++)
    {
        if (arr[i] == ' ' || arr[i] == '\t' || arr[i] == '\n')
            arr[i] = '\0';
    }
    while (getchar() != '\n')
        continue;

    return array1;
}
