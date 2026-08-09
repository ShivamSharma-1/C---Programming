#include<stdio.h>
int main()
{
    int n;
    printf("What's n : ");
    scanf("%d",&n);

    int sum = 0;
    for(int i=1, j=n; i<=n && j>=1; i++, j--)
    {
        sum += i;
        printf("%d\n",j);
    }

    printf("The total sum is %d\n",sum);
    return 0;
}