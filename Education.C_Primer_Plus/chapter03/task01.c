#include <stdio.h>

int main()
{
    int var1 = 2147483647;
    float var2 = 3.402823466e+38;
    printf(" Overflow var1 = %d looks like %d", var1, var1 * 2);
    printf(" Overflow var2 = %f looks like %f", var2, var2 * 2);

    return 0;
}