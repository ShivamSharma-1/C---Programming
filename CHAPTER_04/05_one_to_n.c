#include<stdio.h>
int main()
{
    int n;
    printf("What's n : ");
    scanf("%d", &n);

    //using while loop

    int i = 0;
    while(i <= n)
    {
        printf("%d \n",i);
        i++;
    }


    //using for loop

    // for(int i=0; i<=n; i++)
    // {
    //     printf("%d\n",i);
    // }
    return 0;
}