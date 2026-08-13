#include<stdio.h>
void printarr(int arr[],int arrsize);
void countfeq(int arr[], int arrsize);
int main()
{
    int arrsize;
    do
    {
        printf("Enter size of array : ");
        scanf("%d", &arrsize);
        if(arrsize <= 0)
        {
            printf("Array size must be greater than %d.\n", arrsize);
        }
    }
    while(arrsize <= 0);
    int arr[arrsize];
    for(int i=0; i<arrsize; i++)
    {
        printf("Enter element number %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printarr(arr, arrsize);
    char ask;
    do
    {
        countfeq(arr, arrsize);
        printf("Do you want to search another number? (y/n) : ");
        scanf(" %c", &ask);
    }
    while(ask == 'Y' || ask == 'y');
    
    return 0;
}

void printarr(int arr[],int arrsize)
{
    printf("Array : [ ");
    for(int i = 0; i<arrsize; i++)
        {
            printf("%d", arr[i]);
            if(i != arrsize - 1)
            {
                printf(", ");
            }
        }
    printf("]\n");
}

void countfeq(int arr[], int arrsize)
{
    int x;
    printf("Enter x : ");
    scanf("%d", &x);
    
    int count = 0;
    for(int i = 0; i < arrsize; i++)
    {
        if(arr[i] == x)
        {
            count++;
        }
    }
    if(count == 0)
    {
        printf("Element %d was not found in the array.\n", x);
    }
    else
    {
        printf("%d occurs %d times.\n", x, count);
    }
}