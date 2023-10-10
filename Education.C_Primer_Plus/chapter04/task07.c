#include <stdio.h>
#include <float.h>

int main(void)
{
    float var1 = 1.0 / 3.0;
    double var2 = 1.0 / 3.0;
    printf("%.2f %.12f %.16f\n", var1, var1, var1);
    printf("%.2f %.12f %.16f\n", var2, var2, var2);

    printf("%d %d %d\n", FLT_DIG, FLT_DIG, FLT_DIG);
    printf("%d %d %d\n", DBL_DIG, DBL_DIG, DBL_DIG);

    return 0;
}