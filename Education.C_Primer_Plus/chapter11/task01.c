#include <stdio.h>
#include <string.h>
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
    char *array1;
    array1 = fgets(arr, SIZE, stdin);
    return array1;
}
