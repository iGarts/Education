#include <stdio.h>

int min(int, int);

int main()
{
    int var1, var2;
    printf("Enter a 2 number, i will back a lower\n");
    scanf("%d %d", &var1, &var2);
    printf("lower is %d", min(var1, var2));
}
int min(int a, int b)
{
    return a < b ? a : b;
}