#include <stdio.h>

int main(void)
{
    const float rate1 = 0.15;
    const float rate2 = 0.28;
    unsigned int limit;
    unsigned int category;
    float salary;
    float tax;
    printf("TO EXIT PRESS 5.\nChoise your category: ");
    while ((scanf("%u", &category)) == 1)
    {

        switch (category)
        {
        case 1:
            limit = 17850;
            break;
        case 2:
            limit = 23900;
            break;
        case 3:
            limit = 29750;
            break;
        case 4:
            limit = 14875;
        case 5:
            printf("See you again!!");
            return 0;
        }

        if (category > 0 && category <= 5)

        {
            printf(" Enter you Salary per year: ");
            while ((scanf("%f", &salary)) == 1)
            {
                tax = limit * rate1 + ((salary - limit) * rate2);
                printf("%.2f\n", tax);
                printf("TO EXIT PRESS 5.\nChoise your category: ");
            }
        }
    }

    return 0;
}