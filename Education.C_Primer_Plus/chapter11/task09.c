#include <stdio.h>
#include <string.h>
#define SIZE 20

char *s_gets(char *arr, int n);
void str_mirror(char *arr, int n);

int main(void)
{
    char array[SIZE];
    char temp[SIZE];
    puts("Enter some text to mirroring");
    while (s_gets(array, SIZE) && array[0] != '\n')
    {
        str_mirror(array, strlen(array));
        puts("Enter some text to mirroring");
    }

    return 0;
}

void str_mirror(char *arr, int n)
{
    for (int i = n; i >= 0; i--)
        printf("%c", arr[i]);
    putchar('\n');
}

char *s_gets(char *arr, int n)
{
    char *ptr_arr;
    int i = 0;
    ptr_arr = fgets(arr, n, stdin);
    if (ptr_arr)
    {
        while (arr[i] != '\n' && arr[i] != '\0' && arr[0] != '\n')
            i++;
        if (arr[i] == '\n')
            arr[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return ptr_arr;
}