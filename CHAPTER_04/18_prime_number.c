#include <stdio.h>      

int main()
{
    int n, i;
    do
    {
        printf("What's n: ");
        scanf("%d", &n);

        if (n <= 1)
            continue;

        for (i = 2; i < n; i++)
        {   
            if (n % i == 0)
                break;
        }
        if (i == n)
            break;

    } while (1);

    printf("You've entered a prime number.");

    return 0;
}