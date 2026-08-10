#include<stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("The sum is %d.\n", sum(n));
    return 0;
}
int sum(int n)
{
    if(n==1)
    {return 1;}
    int sum_n_minus_1 = sum(n - 1);
    int total_sum = sum_n_minus_1 + n;

    return total_sum;
}