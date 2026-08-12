#include<stdio.h>
void swap(int a, int b);
void _swap(int *a, int *b);
int main()
{
    int x;
    printf("Enter a : ");
    scanf("%d", &x);

    int y;
    printf("Enter b : ");
    scanf("%d", &y);

    swap(x,y);
    printf("Earlier x : %d & Earlier y : %d\n", x,y);

    _swap(&x,&y);
    printf("New x : %d & New y : %d\n", x,y);
    return 0;
}

void swap(int a, int b)   // CALL  BY  VALUE .
{
    int t = a;
    a = b;
    b = t;
}

void _swap(int *a, int *b)    // CALL  BY  REFERENCE .
{
    int t = *a;
    *a = *b;
    *b = t;
}