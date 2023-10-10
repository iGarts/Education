// reducto.c -- сокращение файлов на две трети!
#include <stdio.h>
#include <stdlib.h> // для exit ()
#include <string.h>
#define SIZE 24

char *s_gets(char *arr, int n);

int main(void)
{
    FILE *in, *out;
    //объявление двух указателей на FILE
    int ch;
    char name[SIZE];
    char file_name[SIZE];
    s_gets(file_name, SIZE);
    int count = 0;
    // хранилище для имени выходного файла
    // проверка аргументов командной строки
    // настройка ввода
    if ((in = fopen(file_name, "r")) == NULL)
    {
        fprintf(stderr, "Не удается открыть файл \"%s\"\n", file_name);
        exit(EXIT_FAILURE);
    }
    // настройка вывода
    int arr_lenght = sizeof(file_name) / sizeof(char);
    strncpy(name, file_name, arr_lenght); 
    // копирование имени файла
    name[arr_lenght - 5] = '\0';
    strcat(name, "2.txt");
    // добавление . red
    if ((out = fopen(name, "w")) == NULL)
    {
        // открытие файла для записи
        fprintf(stderr, "Не удается создать выходной файл.\n");
        exit(EXIT_FAILURE);
    }
    // копирование данных
    while ((ch = getc(in)) != EOF)
        if (count++ % 3 == 0)
            putc(ch, out);
    // выводить каждый третий символ
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