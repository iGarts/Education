#include <stdio.h>

int main()
{
    const int sec_per_min = 60;
    int user_sec;
    printf("Enter a time in seconds:\n");
    printf("Press 0 to exit.\n");
    scanf("%d", &user_sec);
    while (user_sec > 0)
    {
        printf("RESULT: %d,%d\n", user_sec / sec_per_min, user_sec % sec_per_min);
        printf("Enter a time in seconds:\n");
        printf("Press 0 to exit.\n");
        scanf("%d", &user_sec);
    }

    return 0;
}