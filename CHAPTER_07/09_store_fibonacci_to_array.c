#include <stdio.h>

int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    if (n <= 0)
    {
        return 0;
    }

    int fibonacci[n];

    fibonacci[0] = 0;
    printf("%d\t", fibonacci[0]);

    if (n > 1)
    {
        fibonacci[1] = 1;
        printf("%d\t", fibonacci[1]);
    }

    for (int i = 2; i < n; i++)
    {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
        printf("%d\t", fibonacci[i]);
    }

    printf("\n");
    return 0;
}