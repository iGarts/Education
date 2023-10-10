#include <stdio.h>

int main()
{
    int age;
    printf("How old are you?\n");
    scanf("%d", &age);
    printf("You live %f seconds", age * 3.156e07);

    return 0;
}
