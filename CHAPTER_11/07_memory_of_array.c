#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr = (int*)calloc(5,sizeof(int));

    printf("Enter memory input : ");
    for(int i=0; i<10; i++)
    {
        scanf("%d, ", &ptr[i]);
    }
    
    for(int i=0; i<10; i++)
    {
        printf("Number %d : %d\n", i+1, ptr[i]);
    }

    return 0;
}