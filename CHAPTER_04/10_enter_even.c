#include<stdio.h>
int main()
{
    int n;
    do
    {
        printf("Number entered : ");
        scanf("%d", &n);

        if(n % 2 != 0)
        {break;}
    }
    while("true");
    printf("You've entered odd number.\n");

    return 0;
}