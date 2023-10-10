#include <stdio.h>
#include <stdbool.h>

bool is_within(char *arr, char ch);

int main(void)
{
    char array[] = "skr skr skr";
    char c = 's';
    printf(" %d \n", is_within(array, c));

    return 0;
}

bool is_within(char *arr, char ch)
{
    bool result = 0;
    do
    {
        if (*arr == ch)
        {
            result = 1;
        }
    } while (*arr++);

    return result;
}
