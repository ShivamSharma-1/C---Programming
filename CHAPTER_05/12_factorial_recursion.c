#include<stdio.h>
int factorial(int n);
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    printf("The factorial of %d is %d.\n", n, factorial(n));
}
int factorial(int n)
{
    if(n==0)  // it is base case.
    {return 1;}
    int n_minus_1 = factorial(n-1);
    int final = n_minus_1 * n;

    return final;
}