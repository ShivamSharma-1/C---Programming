#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));
    

    int index = 0;
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 != 0)
        {
            ptr[index++] = i;
        }
    }

    printf("Odd numbers : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%4d", ptr[i]);
    }


    printf("\n");


    ptr = (int *)realloc(ptr, 6 * sizeof(int));


    index = 5;
    for (int i = 1; i < 15; i++)
    {
        if (i % 2 == 0)
        {
            ptr[index++] = i;
        }
    }

    printf("Even numbers: ");
    for (int i = 5; i < 11; i++)
    {
        printf("%4d", ptr[i]);
    }

    printf("\n");

    free(ptr);

    return 0;
}