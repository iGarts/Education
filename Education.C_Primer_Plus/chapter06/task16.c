#include <stdio.h>

int main()
{

    float dafna = 100, deidra = 100;
    int i, j, k, l;
    const float lot = 0.05;
    dafna = dafna + (100 * 0.1);
    deidra = deidra + (deidra * lot);
    for (i = 1; dafna >= deidra; i++)
    {
        dafna = dafna + (100 * 0.1);
        deidra = deidra + (deidra * lot);
    }
    printf("%d\n", i);
    printf("Dafna:   %.2lf\n", dafna);
    printf("Deidra:   %.2lf", deidra);

    return 0;
}