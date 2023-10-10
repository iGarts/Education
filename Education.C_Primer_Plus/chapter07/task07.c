#include <stdio.h>
#define LOT 10;
#define LOT_PLUS (10 * 1.5);
#define TAX1 300;
#define TAX2 450;

int main(void)
{
    int time;
    float cash;
    float profit;
    printf("Eneter your working time in hours: ");
    while ((scanf("%d", &time)) == 1 && time > 0)
    {
        if (time <= 40)
            cash = time * LOT;
        if (time > 40)
            cash = time * LOT_PLUS;

        if (cash <= 300)
            profit = cash * 0.85;
        else if (cash > 300 && cash < 450)
            profit = (300 * 0.85) + ((cash - 300) * 0.8);
        else if (cash > 450)
            profit = (300 * 0.85) + (150 * 0.8) + ((cash - 450) * 0.75);
        printf("Your profit is: %.2f$\n", profit);
    }

    return 0;
}