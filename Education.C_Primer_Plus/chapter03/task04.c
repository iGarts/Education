#include <stdio.h>
#include <inttypes.h>

int main()
{
    float var1;
    printf("Enter a number = 64,25\n");
    scanf("%f", &var1);
    printf(" Number %f the same as %a and %e\n", var1, var1, var1);

    return 0;
}