#include <stdio.h>
#include <string.h>
#define CSIZE 2
#define ARR_SIZE 25

struct students
{
    char fName[ARR_SIZE];
    char lName[ARR_SIZE];
    float grade[3];
    float grade_avg;
};

char *s_gets(char *st, int n);
float arr_avg_stud(float arr[]);

void print_str(struct students prnt);

int main(void)
{
    struct students stud_list[CSIZE];
    int i = 0;
    float sum_grades = 0;
    puts("Enter a First name:");
    while (i < CSIZE && s_gets(stud_list[i].fName, ARR_SIZE) != NULL && stud_list[i].fName[0] != '\n')
    {
        puts("Enter a Last name:");
        s_gets(stud_list[i].lName, ARR_SIZE);
        puts("Enter a 3 grades");
        for (int j = 0; j < 3; j++)
            scanf("%f", &stud_list[i].grade[j]);
        i++;
        puts("Enter a First name:");
        while (getchar() != '\n')
            continue;
    }
    for (int i = 0; i < CSIZE; i++)
    {
        stud_list[i].grade_avg = arr_avg_stud(stud_list[i].grade);
    }
    printf("Student List\n");
    for (int i = 0; i < CSIZE; i++)
    {
        print_str(stud_list[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < CSIZE; j++)
        {
            sum_grades += stud_list[j].grade[i];
        }
        printf("%.2f\n", sum_grades / CSIZE);
        sum_grades = 0;
    }
}

char *s_gets(char *st, int n)
{
    char *ret_val;
    char *find;
    ret_val = fgets(st, n, stdin);
    if (ret_val)

        find = strchr(st, '\n'); // поиск новой строки
    if (find)                    // если адрес не равен NULL,
        *find = '\0';            // поместить туда нулевой символ
    else
        while (getchar() != '\n')
            continue; // отбросить остаток строки
    return ret_val;
}

float arr_avg_stud(float arr[])
{
    return ((arr[0] + arr[1] + arr[2]) / 3);
}

void print_str(struct students prnt)
{
    printf("%c. %s %.2f\n", prnt.fName[0], prnt.lName, prnt.grade_avg);
}