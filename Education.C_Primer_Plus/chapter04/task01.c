#include <stdio.h>

int main()
{
    char name[20];
    char surname[20];
    printf("Enter your first and second names(with space between)\n");
    scanf("%s %s", name, surname);
    printf("%s %s", surname, name);
    
    return 0;
}