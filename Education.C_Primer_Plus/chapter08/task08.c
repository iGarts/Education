#include <stdio.h>

float get_float(void);
float get_float_pos(void);
char get_choise(void);
char get_first(void);

int main()
{
    int choise;
    float user_var1, user_var2;
    while ((choise = get_choise()) != 'q')
    {
        user_var1 = get_float();
        user_var2 = get_float_pos();
        while (getchar() != '\n')
            continue;
        switch (choise)
        {
        case 'a':
            printf("%.2f + %.2f = %.2f\n", user_var1, user_var2, user_var1 + user_var2);
            break;
        case 's':
            printf("%.2f - %.2f = %.2f\n", user_var1, user_var2, user_var1 - user_var2);
            break;
        case 'm':
            printf("%.2f * %.2f = %.2f\n", user_var1, user_var2, user_var1 * user_var2);
            break;
        case 'd':
            printf("%.2f / %.2f = %.2f\n", user_var1, user_var2, user_var1 / user_var2);
            break;
        default:
            printf("ERROR\n");
            break;
        }
    }
    printf("See you later, bro!\n");
}

float get_float(void)
{
    float var;
    int ch;
    printf("Enter a first number:");
    while ((scanf("%f", &var)) != 1)
    {
        while ((ch = getchar()) != '\n')
            putchar(ch);
        printf(" Not a valid. Please enter a number\n");
    }

    return var;
}

float get_float_pos(void)
{
    float var;
    int ch;
    printf("Enter a second number:");
    while ((scanf("%f", &var)) != 1 || var == 0)
    {
        while ((ch = getchar()) != '\n')
            putchar(ch);
        printf(" Not a valid. Please enter a number\n");
    }

    return var;
}

char get_choise(void)
{
    int c;
    printf("Please select a aviable option:\n");
    printf(" a. addition \n s. substration \n m. multiplication \n s. subdividion \n q. quit \n");
    c = get_first();
    while (c != 'a' && c != 's' && c != 'm' && c != 'd' && c != 'q')
    {
        printf("Введите доступный вариант!\n");
        c = get_first();
    }

    return c;
}

char get_first(void)
{
    int c;
    c = getchar();
    while (getchar() != '\n')
        continue;

    return c;
}