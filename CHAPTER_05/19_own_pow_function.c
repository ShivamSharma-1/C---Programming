#include<stdio.h>
int power(int n, int p);
int main()
{
    int p;
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("Enter the power : ");
    scanf("%d", &p);
    
    printf("The answer of %d raise to the power %d is %d.\n", n, p, power(n,p));
    return 0;
}
int power(int n, int p)
{
    if(n==0)
    {return 0;}
    if(p==0)
    {return 1;}
    int value = 1;
    for(int i=1; i<=p; i++)
    {
        value *= n; 
    }
    return value;
}