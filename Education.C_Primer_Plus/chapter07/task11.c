#include <stdio.h>

int main(void)
{
    float artichoke, beet, carrot;
    float w_artichoke, w_beet, w_carrot;
    int choise;
    float price1, price2, price3;
    float summary_weight, summary_price;
    float discont, sum_delivery, delivery;

    printf("Choise a pruduct\n");
    while ((scanf("%d", &choise) == 1) && choise != 'q')
    {
        switch (choise)
        {
        case 1:
            printf("Enter a weight: ");
            scanf("%f", &artichoke);
            w_artichoke += artichoke;
            price1 = 2.05 * w_artichoke;
            break;
        case 2:
            printf("Enter a weight: ");
            scanf("%f", &beet);
            w_beet += beet;
            price2 = 1.15 * w_beet;
            break;
        case 3:
            printf("Enter a weight: ");
            scanf("%f", &carrot);
            w_carrot += carrot;
            price3 = 1.09 * w_carrot;
            break;
        }
        summary_weight = w_artichoke + w_beet + w_carrot;
        summary_price = price1 + price2 + price3;
        printf("Choise a pruduct\n");
        printf("To next step Press Q \n");
    }
    if (summary_weight <= 5)
        sum_delivery = summary_price + 6.50;
    else if (summary_weight > 5 && summary_weight <= 20)
        sum_delivery = summary_price + 14.00;
    else if (summary_weight > 20)
        sum_delivery = summary_price + 14 + ((summary_weight - 20) * 0.5);
    delivery = sum_delivery - summary_price;

    if (summary_price >= 100.00)
        discont = summary_price * 0.05;
    summary_price += discont;

    printf("Artichok: %.2fkg, %.2f$. averege price per kg %.2f$\n",
           w_artichoke, price1, price1 / w_artichoke);
    printf("Beet: %.2fkg, %.2f$. averege price per kg %.2f$\n",
           w_beet, price2, price2 / w_beet);
    printf("Carrot: %.2fkg, %.2f$. averege price per kg %.2f$\n",
           w_carrot, price3, price3 / w_carrot);
    printf("Total weight of order is: %.2f$\n"
           "Total price of order: %.2f$\n"
           "Shipping costs is: %.2f$\n"
           "Shipping discont is: %.2f$\n",
           summary_weight, sum_delivery, delivery, discont);

    return 0;
}