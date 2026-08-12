#include<stdio.h>
int main()
{
    int age = 22;
    int *ptr = &age;
    int **pptr = &ptr;
    int _age = **pptr;

    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));
    printf("%d\n", **pptr);
    printf("%d\n", **(&ptr));
    printf("%d\n", _age);
    printf("%d\n", *(&_age));
}