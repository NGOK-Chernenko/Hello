#include <stdio.h>
#include <stdlib.h>

#define SIZE_ARRAY 10

int main(void)
{
    // malloc(выделяет память в оперативке)    calloc(выделяет память и
    // заполняет весь массив 0)

    // int array[SIZE_ARRAY] = {0};
    // int mass[100] = {0};

    // int a = 12;
    // double b = 13.4;
    // printf(" a = %lf\n", (double)a);
    // printf(" b = %d\n", (int)b);

    char *array = (char *)calloc(SIZE_ARRAY, sizeof(char));

    for (int i = 0; i < SIZE_ARRAY; ++i) {
        array[i] = 'c';
    }

    char *ptr = array;
    // ptr += 20;
    //*ptr = 'G';

    for (int i = 0; i < SIZE_ARRAY; ++i) {
        printf("%c %p\n", array[i], &array[i]);
    }
    printf("\n%d %p %ld\n", *ptr, ptr, sizeof(ptr));

    free(array);
    return 0;
}