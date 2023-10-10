#include <stdio.h>
#define YEARS 5
#define MONTH 12

int main(void)
{
    const float rain[YEARS][MONTH] =
        {{4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
         {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
         {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
         {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
         {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}};
    int year, month;
    float subtotal = 0, total = 0;
    //float(*ptr)[2];
    //ptr = rain;
    for (year = 0, total = 0; year < YEARS; year++)
    {
        for (month = 0, subtotal = 0; month < MONTH; month++)
            subtotal += *(*(rain + year) + month);
        printf("%5d %15.lf\n", 2010 + year, subtotal);
        total += subtotal;
    }
    printf("Среднегодовое количество осадков составляет %.2lf дюймов. \n\n",
           total / YEARS);
    printf("СРЕДНЕМЕСЯЧНОЕ КОЛИЧЕСТВО ОСАДКОВ:\n\n");
    printf(" Янв Фев Мар Апр Май Июн Июл Авг Сен Окт");
    printf(" Ноя Дек\n");
    for (month = 0; month < MONTH; month++)
    {
        for (year = 0, subtotal = 0; year < YEARS; year++)
            subtotal += *(*(rain + year) + month);
        printf("%0.2lf ", subtotal / YEARS);
    }
    printf("\n");

    return 0;
}