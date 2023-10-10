#include <stdio.h>
#include <string.h>

int main()
{

    char name[20];
    int len;
    len = strlen(name) + 3;
    printf("Enter your Name:\n");
    scanf("%s", name);
    printf("\"%s\""
           "\n",
           name);
    printf("%20s \n", name);
    printf("%-20s \n", name);
    printf("%.*s", len, name);

    return 0;
}