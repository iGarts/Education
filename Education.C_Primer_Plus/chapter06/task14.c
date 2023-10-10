#include <stdio.h>

int main()
{
    float array1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    float array2[10];
    int i, j, k, sum;
    sum = array1[i] + array1[i - 1];
    for (i = 0; i < 10; i++)
    {
        array2[i] = array1[i] + array2[i - 1] + sum;
    }
    for (j = 0; j < 10; j++)
    {
        printf("[%2.0f]", array1[j]);
    }
    printf("\n");
    for (k = 0; k < 10; k++)
    {
        printf("[%2.0f]", array2[k]);
    }

    return 0;
}