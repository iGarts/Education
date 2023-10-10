#include <stdio.h>
#include <stdlib.h>
#define SIZE 24

int main(int argc, char *argv[])
{
    FILE *in, *out; // объявление двух указателей на FILE
    int ch;
    // проверка аргументов командной строки
    if (argc < 2)
    {
        fprintf(stderr, "Использование: %s имя_файла\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    // открытие файла для записи
    if ((out = fopen(argv[2], "w")) == NULL)
    {
        fprintf(stderr, "Не удается создать выходной файл.\n");
        exit(EXIT_FAILURE);
    }
    // настройка ввода
    if ((in = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "Не удается открыть файл \"%s\"\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    // копирование данных
    while ((ch = getc(in)) != EOF)
        putc(ch, out); // выводить каждый символ
    // очистка
    if (fclose(in) != 0 || fclose(out) != 0)
        fprintf(stderr, "Ошибка при закрытии файлов.\n");

    return 0;
}