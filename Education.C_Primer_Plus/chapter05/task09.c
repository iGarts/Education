#include <stdio.h>
#define F1 (5.0 / 9.0) * (temp - 32.0);
#define F2 273.16;

void temperatures(double temp);

int main()
{

    double temp;
    printf("Enter a TEMPERATURE in Farrenheite:\n");
    while (scanf("%lf", &temp) == 1)
    {
        temperatures(temp);
        printf("Enter a TEMPERATURE in Farrenheite:\n");
    }

    return 0;
}

void temperatures(double temp)
{
    double temp_f, temp_c, temp_k;
    temp_c = F1;
    temp_k = temp_c + F2;
    printf("%.2lfF   %.2lfC   %.2lfK\n", temp, temp_c, temp_k);
}
