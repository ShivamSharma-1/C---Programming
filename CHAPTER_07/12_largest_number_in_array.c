#include<stdio.h>
void printArray(int arr[], int arrsize);
void FindLargest(int arr[], int arrsize);
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
        printf("Element %d of array : ", i+1);
        scanf("%d", &arr[i]);
    }
    printArray(arr, arrsize);
    FindLargest(arr, arrsize);

    return 0;
}
void printArray(int arr[], int arrsize)
{
    printf("Array : [");
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
void FindLargest(int arr[], int arrsize)
{
    int largest = arr[0];
    for(int i=1; i<arrsize; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    printf("Largest element in the array : %d\n", largest);
}