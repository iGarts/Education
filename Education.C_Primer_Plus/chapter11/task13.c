#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
        puts("Enter a valid arguments");
    for (int i = 0; i < argc; i++)
        printf("%s\n", argv[i]);

    return 0;
}