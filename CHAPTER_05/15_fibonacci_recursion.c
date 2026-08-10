#include<stdio.h>
int fibonacci(int n);
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        printf("%d\n", fibonacci(i));
    }
}
int fibonacci(int n)
{
    if(n==0)
    {return 0;}
    if(n==1)
    {return 1;}
    int fib_n_minus_1 = fibonacci(n-1);
    int fib_n_minus_2 = fibonacci(n-2);
    int fib_n = fib_n_minus_1 + fib_n_minus_2;
    return fib_n;
}