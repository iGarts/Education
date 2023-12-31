/* randbin.c — произвольный доступ, двоичный ввод-вывод */
#include <stdio.h>
#include <stdlib.h>
#define ARSIZE 1000

int main(int argc, char **argv)
{
    double numbers[ARSIZE];
    double value;
    int i;
    long pos;
    FILE *iofile;
    // проверка аргументов командной строки
    if (argc < 2)
    {
        fprintf(stderr, "Использование: %s имя_файла\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    // создание набора значений double`
    for (i = 0; i < ARSIZE; i++)
        numbers[i] = 100.0 * i + 1.0 / (i + 1);
    // попытка открыть файл
    if ((iofile = fopen(argv[1], "wb")) == NULL)
    {
        fprintf(stderr, "Не удается открыть файл %s для вывода.\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    // запись в файл массива в двоичном формате
    fwrite(numbers, sizeof(double), ARSIZE, iofile);
    fclose(iofile);
    if ((iofile = fopen(argv[1], "rb")) == NULL)
    {
        fprintf(stderr,
                "Не удается открыть файл %s для произвольного доступа.\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    // чтение избранных элементов из файла
    printf("Введите индекс в диапазоне 0-%d.\n", ARSIZE - 1);
    while (scanf("%d", &i) == 1 && i >= 0 && i < ARSIZE)
    {
        pos = (long)i * sizeof(double); // вычисление смещения
        fseek(iofile, pos, SEEK_SET);   // переход в нужную позицию
        fread(&value, sizeof(double), 1, iofile);
        printf("По этому индексу находится значение %f.\n", value);
        printf("Введите следующий индекс" 
        "(или значение за пределами диапазона для завершения)\n");
    }
    // завершение
    fclose(iofile);
    puts("Программа завершена.");

    return 0;
}