#include <stdio.h>

int sq_root(int n);

int main()
{
    int n;
    int value;

    do
    {
        printf("Enter number : ");
        scanf("%d", &n);

        value = sq_root(n);

        if(value == -1)
        {printf("Please enter a perfect square.\n");}

    } while(value == -1);

    printf("The square root of %d is %d.\n", n, value);

    return 0;
}

int sq_root(int n)
{
    if(n == 0)
        return 0;

    for(int i = 1; i <= n; i++)
    {
        if(i * i == n)
            return i;
    }

    return -1;
}