#include <stdio.h>
#include <string.h>
#define SIZE 20

char *string_in(char *str1, char *str2);
char *s_gets(char *arr, int n);

int main(void)
{
    char text[SIZE];
    char word[SIZE];
    puts("Enter a text");
    s_gets(text, SIZE);
    puts("Enter a word");
    s_gets(word, SIZE);
    char *ptr;
    ptr = string_in(text, word);
    printf("%p, %c\n", ptr, *ptr);
    while (ptr)
    {
        puts("Enter a text");
        s_gets(text, SIZE);
        puts("Enter a word");
        s_gets(word, SIZE);
        ptr = string_in(text, word);
        printf("%p, %c\n", ptr, *ptr);
    }
    
    return 0;
}

char *string_in(char *str1, char *str2)
{
    return strstr(str1, str2);
}

char *s_gets(char *arr, int n)
{
    char *ptr_arr;
    int i = 0;
    ptr_arr = fgets(arr, n, stdin);
    if (ptr_arr)
    {
        while (arr[i] != '\n' && arr[i] != '\0')
            i++;
        if (arr[i] == '\n')
            arr[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return ptr_arr;
}
