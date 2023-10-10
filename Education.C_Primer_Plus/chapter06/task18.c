#include <stdio.h>

int main()
{
    const int danbar = 150;
    int friends = 5;
    int i, j, k;
    printf("week|friends\n");
    for (i = 1; (friends * 2) < danbar; ++i)
    {
        for (j = 1; (friends * 2) < danbar; j++)
        {
            friends = (friends - i) * 2;
            printf("%4d|%7d\n", j, friends);
        }
        printf("\n");
    }

    return 0;
}