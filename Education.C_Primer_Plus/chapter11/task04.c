#include <stdio.h>
#include <string.h>
#define SIZE 10

char *array_write(char *arr, int n);

int main(void)
{
    char array[SIZE];
    array_write(array, SIZE);
    puts(array);

    return 0;
}

char *array_write(char *arr, int n)
{
    char *ptr_arr;
    ptr_arr = arr;
    for (int i = 0; i < n; i++)
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

    return ptr_arr;
}