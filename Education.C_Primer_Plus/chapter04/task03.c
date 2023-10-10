#include <stdio.h>

int main(void)
{
    float num1;
    printf("enter a float number:\n");
    scanf(" %f", &num1);
    printf(" % .2f or %.3e", num1, num1);
}