#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void show_array(const double arr[], int n);
double *new_d_array(int n, ...);

int main(void)
{
    double *ptr1;
    double *ptr2;
    ptr1 = new_d_array(5, 1.2, 2.3, 3.4, 4.5, 5.6);
    ptr2 = new_d_array(4, 100.0, 20.0, 8.08, -1890.0);
    show_array(ptr1, 5);
    show_array(ptr2, 4);
    free(ptr1);
    free(ptr2);

    return 0;
}

double *new_d_array(int n, ...)
{
    va_list mas;
    va_start(mas, n);
    double *arr;
    arr = malloc(n * sizeof(double));
    for (int i = 0; i < n; i++)
    {
        arr[i]=va_arg(mas,double);
    }
    return arr;
}

void show_array(const double arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("[%.4f]", arr[i]);
    }
    printf("\n");
}