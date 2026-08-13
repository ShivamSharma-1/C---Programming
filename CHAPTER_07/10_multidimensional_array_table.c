#include<stdio.h>
void storetable(int arr[][10], int positionofarr, int tabletimes, int number);
int main()
{
    int table[4][10];
    storetable(table, 0, 10, 2);
    storetable(table, 1, 10, 3);
    storetable(table, 2, 10, 4);
    storetable(table, 3, 10, 5);

    for(int i=0; i<10; i++)
    {
        printf("%d\t", table[0][i]);
    }
    printf("\n");
    for(int i=0; i<10; i++)
    {
        printf("%d\t", table[1][i]);
    }
    printf("\n");
    for(int i=0; i<10; i++)
    {
        printf("%d\t", table[2][i]);
    }
    printf("\n");
    for(int i=0; i<10; i++)
    {
        printf("%d\t", table[3][i]);
    }
}
void storetable(int arr[][10], int positionofarr, int tabletimes, int number)
{
    for(int i = 0; i < tabletimes; i++)
    {
        arr[positionofarr][i] = number * (i+1);
    }
}