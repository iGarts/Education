#include <stdio.h>

void br(void);
void ic(void);

int main(void)
{
    br();
    printf(", ");
    ic();
    printf("\n");
    ic();
    printf(",\n");
    br();
}
void br()
{
    printf("Brazil, Uganda");
}

void ic()
{
    printf("Greece, China");
}