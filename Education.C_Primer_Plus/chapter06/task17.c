#include <stdio.h>

int main()
{
    float jack_pot = 1000000;
    const float rate = 1.08;
    float cash = 0;
    int i;
    jack_pot = (jack_pot - 100000) * rate;
    printf("%f", jack_pot);
    for (i = 1; jack_pot >= 0; i++)
    {
        jack_pot = (jack_pot - 100000) * rate;
    }
    printf("\n %d \n", i);

    return 0;
}