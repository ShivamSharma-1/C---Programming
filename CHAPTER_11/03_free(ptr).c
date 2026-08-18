#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    do
    {
        printf("Enter n : ");
        scanf("%d", &n);
    }
    while(n < 0);

    int *ptr;
    ptr = (int*)calloc(n,sizeof(int));

    for(int i=0; i<n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    free(ptr);

    printf("\n");

    ptr = (int*)calloc(5,sizeof(int));

    for(int i=0; i<5; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}