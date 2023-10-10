#include <stdio.h>

double cube(double n);

int main()
{
    double inp;
    printf("Enter a NUMBER:\n");
    scanf("%lf", &inp);
    printf("Number in CUBE:");
    cube(inp);

    return 0;
}

double cube(double n)
{
    n = n * n * n;
    printf("%lf", n);

    return n;
}