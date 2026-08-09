#include<stdio.h>
int main()
{
    int cents;
    do
    {
        printf("Change owned : ");
        scanf("%d", &cents);
        if(cents<=0)
        {continue;}
    }
    while(cents<=0);

    int coins=0;
    while(cents>=25)
    {
        cents -= 25;
        coins++;
    }

    while(cents>=10)
    {
        cents -= 10;
        coins++;
    }

    while(cents>=5)
    {
        cents -= 5;
        coins++;
    }

    while(cents>=1)
    {
        cents -= 1;
        coins++;
    }

    printf("Minimum coins given : %d\n", coins);
    
    return 0;
}