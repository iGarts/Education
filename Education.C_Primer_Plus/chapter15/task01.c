#include <stdio.h>
#include <string.h>
#include <math.h>
int sum(const char *ptr, int n);
int pow_g(int a, int b);
int main(void)
{
    const char *ptr_arr = "00000011";
    int arr_lenght = strlen(ptr_arr);
    printf("%d\n", arr_lenght);
    printf("%d\n", sum(ptr_arr, arr_lenght));
    return 0;
}

int sum(const char *ptr, int n)
{
    int sum = 0;
    int count = n;
    for (int i = 0; i < n; i++)
    {
        if (ptr[count - 1] == '1')
        {
            sum += pow(2, i);
            printf("DEBUG %d\n", i);
        }
        count--;
    }
    return sum;
}

int pow_g(int a, int b)
{
    int sum = 0, multi = a;
    for (int i = 0; i < b; i++)
    {
        multi *= i;
        printf("DEBUG_POW_g %d\n", multi);
    }
    return multi;
}