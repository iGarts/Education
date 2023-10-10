#include <stdio.h>
#include <string.h>
#define SIZE 50

char *mystrncpy(char *str1, const char *str2, int n);

int main(void)
{
    char arr1[SIZE] = "bulochka";
    const char *arr2 = "sosiska";
    mystrncpy(arr1, arr2, strlen(arr2));
    puts(arr1);

    return 0;
}

char *mystrncpy(char *str1, const char *str2, int n)
{
    int i, j = 0;
    for (i = strlen(str1), j = 0; i < SIZE && j < n; i++, j++)
    {
        str1[i] = str2[j];
        if (strlen(str1) > SIZE)
            str1[SIZE] = '\0';
    }

    return str1;
}