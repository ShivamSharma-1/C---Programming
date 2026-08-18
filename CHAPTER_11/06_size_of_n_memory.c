#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    do
    {
        printf("Enter the size you want : ");
        scanf("%d", &n);
    }
    while(n < 0);
    
    int *ptr;
    ptr = (int*)calloc(n,sizeof(int));

    for(int i=0; i<n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}