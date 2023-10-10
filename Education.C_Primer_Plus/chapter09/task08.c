#include <stdio.h>

void power_foo(double, int);

int main(void)
{
    double number, result;
    int power_user;
    printf("Enter a number and power\n");
    while ((scanf("%lf %d", &number, &power_user)) == 2)
    {
        power_foo(number, power_user);
        printf("Enter a number and power\n");
    }

    return 0;
}
void power_foo(double num, int pow)
{
    double result = 1;
    int i;
    for (i = 1; i <= pow; i++)
        result = num * result;
    if (pow >= 0)
        printf("%.2lf\n", result);
    else
        printf("%.2lf\n", -1 / result);
}
