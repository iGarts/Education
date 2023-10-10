#include <stdio.h>

int main(void)
{
    int var1;
    printf("Enter ASCII code:\n");
    scanf(" %d", &var1);
    getchar();
    printf("In table ASCII code %d = %c\n", var1, var1);

    return 0;
}
