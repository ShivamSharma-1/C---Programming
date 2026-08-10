#include<stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("What's the Number : ");
    scanf("%d", &n);

    printf("The sum is %d.\n", sum(n));
    return 0;
}
int sum(int n)
{
    if(n==0)
    {return 0;}
    int total = 0;
    for(int i=n; i>0; i= i/10)
    {
        int digit = i;
        digit = i % 10;
        total = total + digit;
    }

    return total;
}