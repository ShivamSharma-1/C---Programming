#include<stdio.h>
void numbers(int arr[],int n);
int main()
{
    int n;                     // FOR  INPUT .
    printf("Enter n : ");
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++)     // FOR  INPUT  OF  NUMBERS .
    {
        printf("%d number : ", i);
        scanf("%d", &arr[i]);
    }
    numbers(arr,n);               // FUNCTION  CALLING .
    return 0;
}
void numbers(int arr[],int n)      // FUNCTION  DECALARATION .
{
    for(int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}