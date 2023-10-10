#include <stdio.h>
#include <string.h>

int main()
{
    char name[20], surname[20];

    printf("Eneter you NAME:\n");
    scanf("%s", name);
    int len1 = strlen(name);

    printf("Enter your SURNAME:\n");
    scanf("%s", surname);
    int len2 = strlen(surname);

    printf("%s %s \n%*d %*d", name, surname, -len1, len1, -len2, len2);

    return 0;
}