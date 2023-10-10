#include <stdio.h>

int main(void)
{
    unsigned int user_input;

    int i, div;
    printf("Enter some unsigned int: \n");
    while ((scanf("%du", &user_input)) == 1)
    {
        if (user_input <= 0)
            continue;
        else
        {
            for (i = 1; i <= user_input; i++)
            {
                div = user_input % i;
                if (div == 0)
                    printf("%3u\n", i);
            }
        }
    }
    return 0;
}