#include <stdio.h>

int main(void)
{
    int usr;
    int number;
    printf("This program calculates modulo division results. \n"
           "Enter an integer that will serve as the second operand:\n");
    scanf("%d", &usr);
    printf("Now enter the first operand:\n");
    scanf("%d", &number);
    printf("%d  %%  %d  =   %d \n", number, usr, number % usr);
    while (number >= 0)
    {
        printf("Enter the following number for the first operand "
               "(<= O to exit the program) : \n");
        scanf("%d", &number);
        printf("%d  %%  %d  =   %d \n", number, usr, number % usr);
    }
    printf("ERROR");

    return 0;
}