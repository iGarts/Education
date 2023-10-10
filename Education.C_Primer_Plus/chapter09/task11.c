#include <stdio.h>

void fib(int a);

int main()
{
    int input;
    printf("Enter a number");
    while ((scanf("%d", &input)) == 1)
    {
        fib(input);
        printf("Enter a number");
    }

    return 0;
}

void fib(int a)
{
    int fib1 = 1, fib2 = 1, fib_sum;
    int i = 0;
    while (fib_sum < a - fib1)
    {
        fib_sum = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib_sum;
        ++i;
        printf("%d ", fib_sum);
    }
    putchar('\n');
}