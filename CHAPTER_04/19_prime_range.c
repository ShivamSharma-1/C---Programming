#include <stdio.h>

int main()
{
    int start, end;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (int num = start; num <= end; num++)
    {
        if (num <= 1)
        {
            continue;
        }

        int i;
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }

        if (i == num)
        {
            printf("%d\n", num);
        }
    }

    return 0;
}