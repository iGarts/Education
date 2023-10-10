#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int positive_counter = 0;
    int negative_counter = 0;
    int positive_sum = 0;
    int negative_sum = 0;
    int ch;

    while ((scanf("%d", &ch)) == 1 && ch != 0)
    {
        if (ch % 2 == 0)
        {
            positive_sum += ch;
            positive_counter++;
        }
        if (ch % 2 != 0)
        {
            negative_sum += ch;
            negative_counter++;
        }
    }

    printf("positive summary - %d, Averege - %.2lf\n"
           "negative summary - %d , Averege - %.2lf",
           positive_sum, (double)positive_sum / positive_counter, negative_sum, (double)negative_sum / negative_counter);
    
    return 0;
}