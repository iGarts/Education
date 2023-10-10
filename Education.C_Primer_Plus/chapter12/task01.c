#include <stdio.h>

static int units = 0;

void critic(void);

int main(void)
{
    extern int units;
    printf("Сколько фунтов весит маленький бочонок масла?");
    scanf("%d", &units);
    while (units != 56)
        critic();
    printf("Вы знали это!\n");
    return 0;
}

void critic(void)
{
    printf("Вам не повезло. Попробуйте еще раз.\n");
    scanf("%d", &units);
}
