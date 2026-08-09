#include<stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter number : ");
        scanf("%d", &n);

       if(n % 7 == 0)
       {break;}
    }
    while("true");
    printf("%d is a multiple of 7.\n", n);

    return 0;
}