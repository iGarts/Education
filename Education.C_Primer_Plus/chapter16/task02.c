#include "task1.h"
#define AVG_HARM(NUM,X,Y) ((NUM)/((1/X)+(1/Y)))

int main(void)
{
    int x = 4,y=8;
    printf("%.2f\n",AVG_HARM(2,(float)x,(float)y));
    return 0;
}