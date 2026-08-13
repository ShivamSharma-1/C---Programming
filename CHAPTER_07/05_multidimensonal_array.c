#include<stdio.h>
int main()
{
    int marks[2][3];
    marks[0][0]=90;
    marks[0][1]=97;
    marks[0][2]=88;
    marks[1][0]=93;
    marks[1][1]=93;
    marks[1][2]=55;

    printf("%d\n", marks[0][2]);
    return 0;
}