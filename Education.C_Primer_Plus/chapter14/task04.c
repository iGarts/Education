#include <stdio.h>
#include <string.h>
#define SIZE_ARR 2
#define SIZE_CHAR 20

char *s_gets(char *st, int n);

static unsigned int client_list = 5;

struct name
{
    char fName[SIZE_CHAR];
    char lName[SIZE_CHAR];
};

struct socialNumber
{
    unsigned long socNumber;
    struct name client;
};

void print_str(struct socialNumber prnt);

int main(void)
{
    static struct socialNumber characters[SIZE_ARR];
    struct socialNumber *ptr;
    ptr = &characters[0];
    int i = 0;
    int client_counter = 0;
    puts("Enter a First name:");
    while (i < SIZE_ARR && s_gets(characters[i].client.fName, SIZE_CHAR) != NULL && characters[i].client.fName[0] != '\0')
    {
        puts("Enter a Last name:");
        s_gets(characters[i].client.lName, SIZE_CHAR);
        puts("Enter a social ensuarance number:");
        scanf("%lu", &characters[i++].socNumber);
        while (getchar() != '\n')
            continue;
        client_counter++;
        if (i < SIZE_ARR)
            printf("Enter a next client.\n");
    }
    // for (int i = 0; i < SIZE_ARR; i++)
    //     printf("%c. %s %lu\n", characters[i].client.fName[0], characters[i].client.lName, characters[i].socNumber);
    // putchar('n');
    printf("Client List\n");
    for (int i = 0; i < SIZE_ARR; i++)
    {
        print_str(characters[i]);
    }

    return 0;
}

char *s_gets(char *st, int n)
{
    char *ret_val;
    char *find;
    ret_val = fgets(st, n, stdin);
    if (ret_val)

        find = strchr(st, '\n'); // поиск новой строки
    if (find)                    // если адрес не равен NULL,
        *find = '\0';            // поместить туда нулевой символ
    else
        while (getchar() != '\n')
            continue; // отбросить остаток строки
    return ret_val;
}

void print_str(struct socialNumber prnt)
{
    printf("%c. %s %lu\n", prnt.client.fName[0], prnt.client.lName, prnt.socNumber);
}