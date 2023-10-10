#include <stdio.h>

int main(void)
{
    int count, sum, number, output;
    sum = 0;
    count = sum;

    printf("Enter your first contribution:\n");
    scanf("%d", &number);

    while (++sum < number)
    {
        output = sum * sum;
        printf("%d  ", output);
    }

    return 0;
}
