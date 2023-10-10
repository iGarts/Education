#include <stdio.h>

int main()
{
    float volume;
    float tea_spoon, tab_spoon, ounce, cup, pinta;

    printf("Enter a number of cups\n");
    scanf(" %f", &volume);
    printf("%f cups equals  %f pint, %f унций, %f big spoons, %f small spoons\n", volume, volume / 2, volume / 8, volume / 8 / 2, volume / 48);

    return 0;
}