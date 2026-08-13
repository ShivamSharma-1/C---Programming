#include<stdio.h>
void printarr(int arr[], int arrsize);
int main()
{
    int arrsize;
    do
    {
        printf("Enter size for array : ");
        scanf("%d", &arrsize);
        if(arrsize <= 0)
        {
            printf("Please enter the valid size for array.\n");
        }
    }
    while(arrsize <= 0);
    
    int arr[arrsize + 1];
    for(int i=0; i<arrsize; i++)
    {
        printf("Element %d of the array : ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\n");

    printf("ORIGINAL ");
    printarr(arr,arrsize);

    printf("\n");

    int insert;
    printf("Enter element to insert : ");
    scanf("%d", &insert);
    arr[arrsize]=insert;
    arrsize++;

    printf("\n");

    printf("UPDATED ");
    printarr(arr, arrsize);
}

void printarr(int arr[], int arrsize)
{
    printf("ARRAY : [");
    for(int i=0; i<arrsize; i++)
    {
        printf("%d", arr[i]);
        if(i != arrsize - 1)
        {
            printf(", ");
        }
    }
    printf("]\n");
}