//#include "task2_1.h"

int main(void)
{
    char ch;
    extern int mode;
    extern int distance;
    extern float fuel_consumption;
    printf("Для начала работы нажмите S\n");
    printf("Для начала работы нажмите Q\n");
    while (ch = getchar() != 'q')
    {
        get_mode();
        show_info();
        while (getchar() != 0)
            continue;
        printf("Для начала работы нажмите S\n");
        printf("Для начала работы нажмите Q\n");
    }
    printf("Программа завершена.\n");

    return 0;
}
