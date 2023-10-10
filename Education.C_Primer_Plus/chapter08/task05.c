#include <stdio.h>

int lower(int i);
int higher(int i);

int main()
{
    int response;
    int choise;
    int guess = 50;
    printf("Guess the number from 1 to 100, I will try to guess...\n");
    printf("Maybe is 50?\n");
    printf(" Press Y or N\n");
    while ((response = getchar()) != 'y')
    {
        while (getchar() != '\n')
            continue;
        if (response == 'n')
        {
            printf("Number is higher or lower?\n");

            if ((choise = getchar()) == 'h')
            {
                guess *= 1.5;
                printf("Maybe is %d?\n", guess);
                while (getchar() != '\n')
                    continue;
            }
            else if (choise == 'l')
            {
                guess /= 1.5;
                printf("Maybe is %d?\n", guess);
                while (getchar() != '\n')
                    continue;
            }
        }
        //printf("Maybe is %d?\n", guess);
        //printf(" Press Y or N\n");
        //printf("Maybe is %d?\n", guess);
    }
    printf(" YEES, I did it\n");
}

int lower(int i)
{
    int guess = 0;
    return i /= 1.5;
}

int higher(int i)
{
    return i *= 1.5;
}