#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define SIZE 128

static int word_counter;
static int char_counter;
static int arr_lenght;
static char *ptr_arr;

void array_write(char *arr);
char *array_transf(char *arr);

int main(void)
{
    char temp_arr[SIZE];
    puts("Enter a some text");
    array_write(temp_arr);
    arr_lenght = (int)strlen(temp_arr + 1);
    //puts(temp_arr);
    printf("word_counter %d\n", word_counter);
    array_transf(temp_arr);
    printf("%d\n", (int)sizeof(ptr_arr));
    free(ptr_arr);

    //array_transf(temp_arr);

    return 0;
}

void array_write(char *arr)
{
    int last;
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = getchar();
        char_counter++;
        if (arr[i] == ' ')
        {
            word_counter++;
            arr[i] = '\n';
            printf("char_counter %d\n", char_counter);
            char_counter = 0;
        }
        else if (arr[i] == '\n')
        {
            word_counter++;
            arr[i] = '\0';
            last = i;
            printf("char_counter %d\n", char_counter);
            char_counter = 0;
            break;
        }
    }
    while (arr[last - 1] == ' ' || arr[last - 1] == '\n')
    {
        --word_counter;
        --last;
    }
    //return arr;
}

char *array_transf(char *arr)
{
    int ch_count = 0;
    int wrd_count = 0;
    char *tmp_ptr;
    char *ptr_arr[word_counter];
    for (int i = 0; i <= arr_lenght; i++)
    {
        ch_count++;
        if (arr[i] == ' ')
        {
            tmp_ptr = (char *)malloc((ch_count + 1) * sizeof(char));
            *tmp_ptr = *(arr + i + 1);
            ptr_arr[wrd_count] = tmp_ptr;
            free(tmp_ptr);
            wrd_count++;
            arr[i] = '\0';
            printf("char_counter %d\n", ch_count);
            printf("DEBUG_SIZEOF(TMP_PTR[n]) %d\n", (int)sizeof(ptr_arr[wrd_count]));
            ch_count = 0;
        }
        else if (arr[i] == '\n')
        {
            tmp_ptr = (char *)malloc((ch_count + 1) * sizeof(char));
            *tmp_ptr = *(arr + i + 1);
            ptr_arr[wrd_count] = tmp_ptr;
            free(tmp_ptr);
            ++wrd_count;
            arr[i] = '\0';
            printf("char_counter %d\n", ch_count);
            printf("DEBUG_SIZEOF(TMP_PTR[n]) %d\n", (int)sizeof(ptr_arr[wrd_count]));
            ch_count = 0;
            break;
        }
    }
    return ptr_arr;
}

// char *array_transf(char *arr)
// {
//     char *ptr_arr[word_counter];
//     ptr_arr[0] = (char *)malloc(word_counter * sizeof(char));
//     if (isspace(arr[0]) != ' ')
//         ptr_arr[0] = arr[0];
//     for (int i = 0; i < word_counter; i++)
//     {
//         for (int j = 0; j < arr_lenght; j++)
//         {
//             if (arr[j] == '\n')
//             {
//                 arr[j] = '\0';
//                 ptr_arr[i + 1] = arr[j + 1];
//             }
//         }
//     }
// }

// char *ptr_to_str_ptr[10] = NULL;
// ptr_to_str_ptr[0] = (char *)malloc(10 * sizeof(char));
// ptr_to_str_ptr[1] = (char *)malloc(10 * sizeof(char));
// ptr_to_str_ptr[2] = (char *)malloc(10 * sizeof(char));

// char *array_transf(char *arr, int words, int chars)
// {
//     int count = 0;
//     char *array[words];
//     for (int i = 0; i < words; i++)
//     {
//         if (arr[i] == '\n')
//         {
//             count++;
//             array[count] = (char *)malloc(i * sizeof(char));
//             array[count] = arr[i + 1];
//             arr[i] = '\0';
//         }
//         puts(array[0]);
//         return array;
//     }
// }

/*
int amount;
    char * temp_arr = NULL;
    int i=0;
    char ch;
    char *ptr_arr[amount];
    printf("Сколько слов вы хотите ввести?\n");
    printf("Для выхода нажмине 0\n");
    printf("Теперь введите %d слов(а):", amount);
    while (ch = getchar() != '\n')
    {
        temp_arr[i] = ch;
        i++;   
        if (ch == ' ')
        {
            ch = '\n';

        }
    }
*/

/*
    // char *temp_arr;
    // char *temp_ptr;
    int counter = 0;
    int n = (char *)malloc(sizeof(char));
    fgets(temp_arr, n, stdin);
    if (temp_arr)
    {
        for (int i = 0; i < n; i++)
        {
            if (temp_arr[i] == ' ')
            {
                temp_arr[i] = '\n';
                counter++;
                arr[counter] = temp_arr[i + 1];
            }
        }
        while (getchr() != '\n')
            continue;
    }

    return 0;


    //sizeof(char) -- 1
    //sizeof(int)  -- 4

////////////////////////////////////////////////
    char *str_ptr = NULL;
    str_ptr = (char *)malloc(10 * sizeof(char));

    char *str_ptr2 = NULL;
    str_ptr2 = (char *)malloc(10 * sizeof(char));

    char *str_ptr3 = NULL;
    str_ptr3 = (char *)malloc(10 * sizeof(char));

    free(str_ptr);
    free(str_ptr2);
    free(str_ptr3);
////////////////////////////////////////////////

    char *ptr_to_str_ptr[10] = NULL;
    ptr_to_str_ptr[0] = (char *)malloc(10 * sizeof(char));
    ptr_to_str_ptr[1] = (char *)malloc(10 * sizeof(char));
    ptr_to_str_ptr[2] = (char *)malloc(10 * sizeof(char));

    free(ptr_to_str_ptr[0]);
    free(ptr_to_str_ptr[1]);
    free(ptr_to_str_ptr[2]);

////////////////////////////////////////////////
    const size_t str_number = 3;

    char **ptr_to_str_ptr = NULL;
    ptr_to_str_ptr = (char *)malloc(str_number * sizeof(char *));

    ptr_to_str_ptr[0] = (char *)malloc(10 * sizeof(char));
    ptr_to_str_ptr[1] = (char *)malloc(10 * sizeof(char));
    ptr_to_str_ptr[2] = (char *)malloc(10 * sizeof(char));

    free(ptr_to_str_ptr[0]);
    free(ptr_to_str_ptr[1]);
    free(ptr_to_str_ptr[2]);

    free(ptr_to_str_ptr);
}
*/