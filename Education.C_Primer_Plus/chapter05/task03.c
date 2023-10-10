#include <stdio.h>

int main()
{
    unsigned int days;
    const int day_per_week = 7;
    printf("Enter number of days:\n");
    while (days >= 1)
    {
        scanf("%d", &days);
        printf("RESULT: %d  weeks  %d   days\n", days / day_per_week, days % day_per_week);
        printf("Enter number of days:\n");
    }
    printf("You enter a wrong value!\n");

    return 0;
}