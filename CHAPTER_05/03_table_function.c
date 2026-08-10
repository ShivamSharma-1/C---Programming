#include<stdio.h>
void table(int n);
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    table(n);   //(n) is a arguement or actual parameter

    return 0;
}
void table(int n)
{
    for(int i=1; i<=10; i++)
    {
        printf("%d * %d = %d\n", n, i, n*i);    //(i*n) is a parameter or formal parameter
    }
}