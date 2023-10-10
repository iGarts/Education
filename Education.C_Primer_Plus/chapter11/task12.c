#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 50

char *s_gets(char *arr, int n);

int main(void)
{
    int word_count = 0, lower_count = 0, upper_count = 0, punkt_count = 0, int_count = 0;
    char *ptr_arr;
    char temp[SIZE];
    ptr_arr = s_gets(temp, SIZE);
    while (*ptr_arr)
    {
        int_count++;
        if (isupper(*ptr_arr))
            upper_count++;
        else if (islower(*ptr_arr))
            lower_count++;
        else if (ispunct(*ptr_arr))
            punkt_count++;
        else if (isspace(*ptr_arr))
            word_count++;
        *ptr_arr++;
    }
    printf("word_count = %d, lower_count = %d, upper_count = %d, punkt_count = %d, int_count = %d\n", word_count, lower_count, upper_count, punkt_count, int_count);
    
    return 0;
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