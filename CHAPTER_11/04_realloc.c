#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr = (int*)calloc(5,sizeof(int));

    printf("Enter old memory : ");
    for(int i=0; i<5; i++)
    {
        scanf("%d, ", &ptr[i]);
    }

    ptr = realloc(ptr,8);

    printf("Enter new memory : ");
    for(int i=0; i<8; i++)
    {
        scanf("%d, ", &ptr[i]);
    }

    for(int i=0; i<8; i++)
    {
        printf("Number %d : %d\n", i+1, ptr[i]);
    }

    return 0;
}