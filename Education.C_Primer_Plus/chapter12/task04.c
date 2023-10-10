#include <stdio.h>

static int counter;

int sum (int i, int j);

int main(void)
{
    int a = 5;
    for (int i=0; i<10;i++)
    {
        sum(5,i);
    }
    printf("\n");
    printf("%d\n",counter);

    return 0;
}

int sum (int i, int j)
{
    int res = i*j;
    printf("%d  ", res);
    counter++;

    return res;
}