/* count.c — использование стандартного ввода-вывода */
#include <stdio.h>
#include <stdlib.h> // прототип exit()
#define SIZE 24

char *s_gets(char *arr, int n);

int main(void)
{
    int ch;   // место для хранения каждого символа по мере чтения
    FILE *fp; // "указатель файла"
    char *ptr;
    unsigned long count = 0;
    s_gets(ptr,SIZE);
    printf("%s",ptr);
    if ((fp = fopen(ptr, "r")) == NULL)
    {
        printf("Не удается открыть %s\n", ptr);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF)
    {
        putc(ch, stdout); // то же, что и putchar (ch) ;
        count++;
    }
    fclose(fp);
    printf("Файл %s содержит %lu символов\n", ptr, count);

    return 0;
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
