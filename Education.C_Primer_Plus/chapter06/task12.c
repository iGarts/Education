#include <stdio.h>

int main()
{
    int input, scan;
    double i, j, k, l;
    double cicle1, cicle2, cicle3;
    double sum1 = 0, sum2 = 0, sum3 = 0;
    printf("Enter a nubmer of elements: ");
    scanf("%d", &input);
    do
    {
        for (i = 1; i <= input; i++)
        {
            cicle1 = 1 / i;
            sum1 = sum1 + cicle1;
        }

        for (j = 1; j <= input; j += 2)
        {
            cicle2 = 1 / j;
            sum2 = sum2 + cicle2;
        }
        for (k = 2; k <= input; k += 2)
        {
            cicle3 = 1 / k;
            sum3 = sum3 + cicle3;
        }
        printf("first sequence: %lf\nsecond sequence: %lf\n", sum1, -sum3 + sum2);
    } while (scanf("%d", &input) == 1);

    return 0;
}