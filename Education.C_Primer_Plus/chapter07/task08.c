#include <stdio.h>

int main(void)
{
    const int tax1 = 300;
    const int tax2 = 450;
    int time, input;
    float cache, profit, rate;
    printf(" Choise your payment rate: \n"
           "1. 8.75$ \n2. 9.33$ \n3. 10.00$ \n4. 11.20$ \n5. EXIT\n");
    while ((scanf("%d", &input)) == 1)
    {
        switch (input)
        {
        case 1:
            rate = 8.75;
            break;
        case 2:
            rate = 9.33;
            break;
        case 3:
            rate = 10.00;
            break;
        case 4:
            rate = 11.20;
            break;
        case 5:
            printf("See you next time!\n");
            return 0;
            break;
        }

        printf("Eneter your working time in hours: \n");

        while ((scanf("%d", &time)) == 1 && time > 0)
        {
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
        printf(" Choise your payment rate: \n"
               "1. 8.75$ \n2. 9.33$ \n3. 10.00$ \n4. 11.20$ \n5. EXIT\n");
    }

    return 0;
}