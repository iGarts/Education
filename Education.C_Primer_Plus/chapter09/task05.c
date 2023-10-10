#include <stdio.h>

void large(int *, int *);

int main()
{
    int user_inp1, user_inp2;
    printf("enter a 2 numbers,a select a larger\n");
    scanf("%d %d", &user_inp1, &user_inp2);
    int *ptr_user_inp1 = &user_inp1;
    int *ptr_user_inp2 = &user_inp2;
    large(ptr_user_inp1, ptr_user_inp2);
    printf("%d %d is largert\n", user_inp1, user_inp2);

    return 0;
}

void large(int *a, int *b)
{
    if (*a > *b)
        *b = *a;
    else
        *a = *b;
}
