#include <stdio.h>

int main(void)
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("%d: years,  %d: days\n",age,age*365);
    return 0;
}