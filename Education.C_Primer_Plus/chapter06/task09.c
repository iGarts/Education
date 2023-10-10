#include <stdio.h>

float foo(float x, float y);

int main()

{
    float var1, var2;
    int scn1, scn2;
    printf("Enter FIRST variable:");
    scn1 = scanf("%f", &var1);
    printf("Enter SECOND variable:");
    scn2 = scanf("%f", &var2);
    do
    {
        printf("%f\n", foo(var1, var2));
        printf("Enter FIRST variable:");
        scn1 = scanf("%f", &var1);
        printf("Enter SECOND variable:");
        scn2 = scanf("%f", &var2);
    } while (scn1 + scn2 == 2);

    return 0;
}

float foo(float x, float y)
{
    float value = (x - y) / (x * y);
    return value;
}