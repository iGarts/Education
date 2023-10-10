#include <stdio.h>

char get_choise(void);
char get_first(void);

int main(void)
{
    const int tax1 = 300;
    const int tax2 = 450;
    int time;
    char input;
    float cache, profit, rate;
    while ((input = get_choise()) != 'q')
    {

        switch (input)
        {
        case 'a':
            rate = 8.75;
            break;
        case 'b':
            rate = 9.33;
            break;
        case 'c':
            rate = 10.00;
            break;
        case 'd':
            rate = 11.20;
            break;
        default:
            printf("Error\n");
            break;
        }

        printf("Eneter your working time in hours: \n");

        while ((scanf("%d", &time)) == 1 && time > 0)
        {
            while (getchar() != '\n')
                continue;
            if (time <= 40)
                cache = time * rate;
            if (time > 40)
                cache = time * (rate * 1.5);
            if (cache <= 300)
                profit = cache * 0.85;
            else if (cache > 300 && cache < 450)
                profit = (300 * 0.85) + ((cache - 300) * 0.8);
            else if (cache > 450)
                profit = (300 * 0.85) + (150 * 0.8) + ((cache - 450) * 0.75);
            printf("Your profit is: %.2f$\n", profit);
            break;
        }
    }

    return 0;
}

char get_choise(void)
{
    int c;
    printf(" Choise your payment rate: \n"
           "a. 8.75$ \nb. 9.33$ \nc. 10.00$ \nd. 11.20$ \nq. EXIT\n");
    c = get_first();
    while (c != 'a' && c != 'b' && c != 'c' && c != 'd' && c != 'q')
    {
        printf("Please select a aviable options!\n");
        c = get_first();
    }

    return c;
}

char get_first(void)
{
    int c;
    c = getchar();
    while (getchar() != '\n')
        continue;

    return c;
}