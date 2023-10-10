#include <stdio.h>

char *strCHR(char *arr, char ch);

int main(void)
{
    char array[] = "skr skr skr";
    char c = 's';
    char *ptr = strCHR(array, c);
    printf(" %p \n %c \n", ptr, *ptr);

    return 0;
}

char *strCHR(char *arr, char ch)
{
    do
    {
        if (*arr == ch)
        {
            return arr;
        }
    } while (*arr++);

    return (0);
}
