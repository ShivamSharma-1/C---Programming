#include<stdio.h>
int main()
{
    int height;
    do
    {
        printf("What's Height : ");
        scanf("%d", &height);

        if(height <= 0)
        {continue;}
    }
    while(height <= 0);

    for(int column = 1; column <= height; column++)
    {
        for(int row = 1; row <= column; row++)
        {
            printf("# ");
        }
        printf("\n");
    }
    return 0;
}