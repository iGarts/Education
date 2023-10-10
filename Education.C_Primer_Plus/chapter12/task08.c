#include <stdio.h>
#include <stdlib.h>

int *make_array(int elem, int val);
void show_array(int *, int n);

int main(void)
{
    int *ptr;
    int size;
    int value;
    printf("Введите количество элементов: ");
    while (scanf("%d", &size) == 1 && size > 0)
    {
        printf("Введите значение для инициализации: ");
        scanf("%d", &value);
        ptr = make_array(size, value);
        //if (рtr_arr)
        //{
        show_array(ptr, size);
        free(ptr);
        // }
        printf("Bвeдитe количество элементов (<1 для завершения): ");
    }
    printf("Программа завершена.\n");

    return 0;
}

int *make_array(int elem, int val)
{
    int *ptr = (int *)malloc(sizeof(elem));
    for (int i = 0; i < elem; i++)
        ptr[i] = val;

    return ptr;
}

void show_array(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i % 8 == 0)
            printf("\n");
        printf("[%d]", arr[i]);
    }
}