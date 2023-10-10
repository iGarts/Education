#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arr[99];
    int temp;
    for (int i = 0; i < 99; i++)
        arr[i] = rand() % 9 + 1;

    for (int i = 0; i < 99 - 1; i++)
    {
        for (int j = 0; j < 99 - i - 1; j++)
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    }
    for (int i = 0; i < 99; i++)
    {
        for (int j = 0; j < 10; j++)
            printf("[%d]", arr[i]);
        printf("\n");
    }

    return 0;
}