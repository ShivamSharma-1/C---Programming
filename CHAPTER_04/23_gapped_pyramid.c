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
    
    for(int row = 1; row <= height; row++)
    {
        for(int space = 1; space<=height-row; space++)
        {
            printf(" ");
        }
        for(int column = 1; column <= row; column++)
        {
            printf("#");
        }
        printf("  ");
        for(int column = 1; column <= row; column++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}