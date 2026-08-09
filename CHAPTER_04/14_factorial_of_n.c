#include<stdio.h>
int main()
{
    int n;
    printf("What's n : ");
    scanf("%d", &n);

    int factorial=1;
    for(int i=1; i<=n; i++)
    {
        factorial = factorial * i;
    }
    printf("The factorial of %d is %d\n", n, factorial);
    return 0;
}