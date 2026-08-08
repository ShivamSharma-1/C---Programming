#include<stdio.h>
int main()
{
    int number;
    printf("Number : ");
    scanf("%d", &number);

    if(number >= 1)
    {
        printf("It's a natural number \n");
    }
    else
    {
        printf("It's not a natural number \n");
    }

    return 0;
}