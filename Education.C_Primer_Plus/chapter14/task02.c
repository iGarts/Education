#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *arr_convert(char *arr, int n);
struct calendar
{
    int month_amount;
    int days_amount[13];
    char *month[13];
};

struct date
{
    int day;
    int year;
    int char_lenght;
    char month[];
};

int main(void)
{
    int sum_days = 0;
    int temp_member = 0;
    struct date user_input;
    struct calendar day_lib =
        {
            12,
            {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
            {"january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december"}};
    scanf("%d %s %d", &user_input.day, user_input.month, &user_input.year);
    //user_input.char_lenght = strlen(user_input.month);
    //arr_convert(user_input.month, user_input.char_lenght);
    for (int i = 0; i < day_lib.month_amount; i++)
    {
        if ((strcmp(user_input.month, day_lib.month[i])) == 1)
        {
            temp_member = i;
            printf("%d", i);
            break;
        }
    }
    for (int i = 0; i < temp_member; i++)
    {
        sum_days += day_lib.days_amount[i];
    }
    if (user_input.day % 4 == 0)
        sum_days += 1;
    printf("С 1 января %d года до %d %s прошло %d дней", user_input.year, user_input.day, user_input.month, sum_days);
    
    return 0;
}

// char *arr_convert(char *arr, int n)
// {
//     char ch;
//     for (int i = 0; i <= n; i++)
//     {
//         if (arr[i] == '\n')
//         {
//             arr[i] = '\0';
//             break;
//         }
//     }
//     return arr;
// }