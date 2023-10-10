#include <stdio.h>
#include <string.h>
#define SIZE 20

char *s_gets_space(char *arr, int n);

int main(void)
{
    char array[SIZE];
    while (s_gets_space(array, SIZE))
    {
        puts(array);
    }

    return 0;
}

char *s_gets_space(char *arr, int n)
{
    char *ptr_arr;
    int i = 0;
    ptr_arr = fgets(arr, n, stdin);
    if (ptr_arr)
    {
        while (arr[i] != '\n' && arr[i] != '\0')
        {
            i++;
            if (arr[i] == ' ')
                arr[i] = '\b';
        }
        if (arr[i] == '\n')
            arr[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return ptr_arr;
}