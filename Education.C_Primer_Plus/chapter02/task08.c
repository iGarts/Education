#include <stdio.h>

void one_three(void);
void two(void);

int main(void)
{
    printf("Starting!\n");
    one_three();
    printf("Done!\n");
}

void one_three()
{
    printf("One\n");
    two();
    printf("Three\n");
}

void two()
{
    printf("two\n");
}