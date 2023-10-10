#include <stdio.h>

int main()
{
    float sm;
    const float m_per_lb = 3.28084;
    const float m_per_inch = 39.3701;
    printf("Enter lenght in sm:\n");
    scanf("%f", &sm);
    while (sm >= 0.0001)
    {
        printf("Enter lenght in sm: %.0f \nLenght is: %.2f meters, %.2f lb, %.2f inch\n",
               sm, sm / 100, sm / 100 * m_per_lb, sm / 100 * m_per_inch);
        printf("Enter lenght in sm:\n");
        scanf("%f", &sm);
    }
    printf("You enter a wrong lenght!\n");

    return 0;
}