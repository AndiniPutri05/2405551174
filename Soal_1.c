#include <stdio.h>
#include <stdlib.h>

int compare(const void *z, const void *x)
{
    return ((int)z - (int)x);
}

int main(void)
{
    int size;

    scanf("%d", &size);
    if (size <= 0)
    {
        printf("Array size must be a integer.\n");
        return 1;
    }

    int array = (int)malloc(size * sizeof(int));
    if (array == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    
    for (int j = 0; j < size; j++) {
        scanf("%d", &array[j]);
    }

    qsort(array, size, sizeof(int), compare);


    for (int j = 0; j < size; j++) {
        printf("%d\n", array[j]);
    }
    free(array);

    return 0;
}