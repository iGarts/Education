#include <stdio.h>
#include <stdlib.h>
#define SIZE 24

int main(int argc, char **argv)
{
    char ch;
    // проверка аргументов командной строки
    if (argc < 2)
    {
        fprintf(stderr, "Использование: %s имя_файла\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    // открытие файла для записи
    for (int i = 1; i < argc; ++i)
    {
        FILE *ptr_input_file;
        if ((ptr_input_file = fopen(argv[i], "r")) == NULL)
        {
            fprintf(stderr, "Не удается создать выходной файл.\n");
            exit(EXIT_FAILURE);
        }
        while ((ch = getc(ptr_input_file)) != EOF)
            putchar(ch); // выводить каждый символ
        // очистка
        fclose(ptr_input_file);
    }

    return 0;
}