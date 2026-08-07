#include<stdio.h>
int main()
{
    int x;
    printf("What's x?");
    scanf("%d", &x);

    int y;
    printf("What's y?");
    scanf("%d", &y);

    // Using ternary operater
    printf("The smallest number : %d", (x < y) ? x : y);
}