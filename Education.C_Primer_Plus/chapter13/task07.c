#include <stdio.h>
#include <stdlib.h> // для exit ()
#include <string.h>
#define SIZE 24

char *s_gets(char *arr, int n);

int main(int argc, char **argv)
{
    FILE *input1, *input2;
    int ch1, ch2;
    if (argc < 2)
    {
        fprintf(stderr, "Использование: %s имя_файла\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if ((input1 = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "Не удается открыть файл \"%s\"\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if ((input2 = fopen(argv[2], "r")) == NULL)
    {
        exit(EXIT_FAILURE);
    }
    while ((ch1 = getc(input1)) != EOF || (ch2 = getc(input2)) != EOF)
    {
        putc(ch1, stdout);
        putc(ch2, stdout);

        // if (ch1 == '\0')
        // {
        //     putc(ch2, stdout);
        //     if (ch2 == '\n')
        //         continue;
        // }
    }
    if (fclose(input1) != 0 || fclose(input2) != 0)
        fprintf(stderr, "Ошибка при закрытии файлов.\n");

    return 0;
}