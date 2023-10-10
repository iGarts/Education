#include <stdio.h>

double harm_sum(double, double);

int main()
{
    double usr_inp1, usr_inp2;
    printf(" Enter a 2 number, a calculate a averegee harmonic\n");
    scanf("%lf %lf", &usr_inp1, &usr_inp2);
    printf("%.4lf", harm_sum(usr_inp1, usr_inp2));

    return 0;
}

double harm_sum(double a, double b)
{
    double harm = 2 / ((1 / a) + (1 / b));
    return harm;
}