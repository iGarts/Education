#include <stdio.h>
#include <stdlib.h>

struct year
{
    int amount;
    char month[13];
    int amount_days[13];
};

int main(int argc, char **argv)
{
    if (argc < 2 && argc > 3)
    {
        fprintf(stderr, "Please, Enter a correct parametr");
        exit(EXIT_FAILURE);
    }
    struct year md =
        {
            12,
            {"january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december"},
            {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    int input_month;
    int sum_days = 0;
    puts("Enter a number of month");
    scanf("%d", &input_month);
    for (int i = 0; i < input_month; i++)
    {
        sum_days += md.amount_days[i];
    }
    printf("%d", sum_days);

    return 0;
}