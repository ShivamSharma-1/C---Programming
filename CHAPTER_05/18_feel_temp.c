#include<stdio.h>
void feel(int temp);
int main()
{
    int temp;
    printf("What's the temperature : ");
    scanf("%d", &temp);

    feel(temp);
    return 0;
}
void feel(int temp)
{
    if(temp >= 30)
    {
        printf("It's HOT there!\n");
    }
    else if(temp <= 15)
    {
        printf("It's COLD there!\n");
    }
    else
    {
        printf("It's NORMAL temperature.\n");
    }
}