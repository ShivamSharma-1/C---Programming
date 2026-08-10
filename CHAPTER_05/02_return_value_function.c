#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a;
    printf("Enter a : ");
    scanf("%d", &a);

    int b;
    printf("Enter b : ");
    scanf("%d", &b);

    int s;
    s = sum(a,b);
    printf("THE SUM IS : %d\n", s);
}

int sum(int a, int b)
{
    return a + b;
}