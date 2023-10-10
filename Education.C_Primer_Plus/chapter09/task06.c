#include <stdio.h>

void sorter(double *, double *, double *);
void swap(double *, double *);

int main()
{
    double var1, var2, var3;
    printf("Enter a 3 various variables, and i wil sort it!\n");
    scanf("%lf %lf %lf", &var1, &var2, &var3);
    double *ptr_var1 = &var1;
    double *ptr_var2 = &var2;
    double *ptr_var3 = &var3;
    sorter(ptr_var1, ptr_var2, ptr_var3);
    printf("%.2lf %.2lf %.2lf", var1, var2, var3);

    return 0;
}

void sorter(double *x, double *y, double *z)
{
    if (*x > *z)
        swap(x, z);
    if (*y > *z)
        swap(y, z);
    if (*x > *y)
        swap(x, y);
}

void swap(double *a, double *b)
{
    double temp = *a;
    *a = *b;
    *b = temp;
}