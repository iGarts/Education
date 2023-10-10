#include <stdio.h>

int main(void)
{
    const float mile = 1.609;
    const float gallon = 3.785;
    float distance, volume;
    printf("Enter your MILIAGE:\n");
    scanf("%f", &distance);
    printf("Enter your fuel spent in gallons:\n");
    scanf("%f", &volume);
    printf("average RPG per 1 liter of fuel is:\n   %.1f \n", distance / volume);
    printf("averege fuel consumption per 1 km is:\n   %.2f \n", ((volume * gallon) / (distance * mile) * 100));
    
    return 0;
}