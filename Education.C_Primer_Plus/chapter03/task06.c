#include <stdio.h>

int main()
{
    double mass_molokula = 3.0e-23;
    int kvart = 950;
    int volume;
    printf("Введите water valume in kvarts\n");
    scanf("%d", &volume);
    printf("In %d kvarts water have %le moleculs", volume, mass_molokula * kvart * volume);

    return 0;
}