#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void show_info(bool i, int d, float f);

int main(void)
{
    char ch;
    int mode;
    int distance;
    float fuel_consumption;

    printf("Для начала работы нажмите S\n");
    printf("Для начала работы нажмите Q\n");
    while (ch = getchar() != 'q')
    {
        printf("Введите О для метрического режима или 1 для американского режима: ");
        scanf("%d", &mode);
        printf("Введите пройденное расстояние в километрах: ");
        scanf("%d", &distance);
        printf("Введите объем израсходованного топлива: ");
        scanf("%f", &fuel_consumption);
        show_info(mode, distance, fuel_consumption);
        printf("Для начала работы нажмите S\n");
        printf("Для начала работы нажмите Q\n");
        while (getchar() != '\n')
            continue;
    }
    printf("Программа завершена.\n");

    return 0;
}

void show_info(bool i, int d, float f)
{
    if (i == 0)
        printf("Расход топлива составляет: %.2f на 100 километров \n", f / d * 100);
    else if (i == 1)
        printf("Расход топлива составляет: %.2f на 100 миль \n", (f / d * 100) / 1.6);
}
