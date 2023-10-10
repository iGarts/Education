#include <stdio.h>
#include <string.h>
#define SIZE 50
#define LINES 5

int get_choise(void);
char *s_gets(char *arr, int n);
void sort_lenght(char *arr[]);
char *sort_first(char *arr);

int main(void)
{
    int input, i = 0, j = 0;
    char array[LINES][SIZE];
    char *ptr_arr[LINES];
    while (i < LINES && s_gets(array[i], SIZE) != NULL)
    {
        ptr_arr[i] = array[i];
        i++;
    }
    while ((input = get_choise()) != EOF)
    {
        switch (input)
        {
        case 1:
            for (int i = 0; i < LINES; i++)
                puts(ptr_arr[i]);
            break;
        case 2:
            for (int i = 0; i < LINES; i++)
            {
                for (int j = 0; j < SIZE; j++)
                    printf("[%d]", (int)ptr_arr[i][j]);
                putchar('\n');
            }
            break;
        case 3:
            sort_lenght(ptr_arr);
            for (int i = 0; i < LINES; i++)
                puts(ptr_arr[i]);
            break;
        case 4:
            printf("%d\n", input);
            break;
        case 5:
            puts("See you later");
            return 0;
        default:
            puts("ERROR");
            break;
        }
    }
}

int get_choise(void)
{
    printf(" Choise your payment rate: \n"
           "1. Source text \n"
           "2. ASCII \n"
           "3. Increasing length \n"
           "4. Increasing the length of the first word \n"
           "5. EXIT \n");
    int userInput;
    scanf("%d", &userInput);
    while (userInput < 1 && userInput > 5)
    {
        puts("Please select a aviable option!");
        scanf("%d", &userInput);
    }
    //printf("DEBUG_GET_CHOISE %d\n", userInput);
    return userInput;
}

char *s_gets(char *arr, int n)
{
    char *ptr_arr;
    char *find;
    ptr_arr = fgets(arr, n, stdin);
    if (ptr_arr)
    {
        find = strchr(arr, '\n');
        if (find)
            *find = '\0';
        else
        {
            while (getchar() != '\n')
                continue;
        }
    }
    return ptr_arr;
}

void sort_lenght(char *arr[])
{
    char *temp;
    for (int i = 0; i < LINES - 1; i++)
    {
        for (int j = 0; j < LINES - 1 -i; j++)
        {
            if (strlen(arr[j]) > strlen(arr[j + 1]))
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}