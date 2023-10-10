/* count.c — использование стандартного ввода-вывода */
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h> // прототип exit()
#define SIZE 24

char *s_gets(char *arr, int n);

int main(void)
{
    int ch;         // место для хранения каждого символа по мере чтения
    FILE *in, *out; // "указатель файла"
    char ptr_in[SIZE];
    char ptr_out[SIZE];
    s_gets(ptr_in, SIZE);
    s_gets(ptr_out, SIZE);
    // открытие файла для записи
    if ((out = fopen(ptr_out, "w+")) == NULL)
    {
        fprintf(stderr, "Не удается создать выходной файл.\n");
        exit(EXIT_FAILURE);
    }
    // настройка ввода
    if ((in = fopen(ptr_in, "r+")) == NULL)
    {
        fprintf(stderr, "Не удается открыть файл \"%s\"\n", ptr_in);
        exit(EXIT_FAILURE);
    }
    // копирование данных
    while ((ch = getc(in)) != EOF)
        putc(toupper(ch), out); // выводить каждый символ
    // очистка
    if (fclose(in) != 0 || fclose(out) != 0)
        fprintf(stderr, "Ошибка при закрытии файлов.\n");
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
