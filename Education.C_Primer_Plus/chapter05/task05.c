#include <stdio.h>

int main(void)
{
    int count, sum, number;
    sum = 0;
    count = 0;

    printf("Enter your first contribution:\n");
    scanf("%d", &number);

    while (sum++ < number)
    {
        sum = sum + count;
        printf("%d  ", sum);
    }
    return 0;
}
