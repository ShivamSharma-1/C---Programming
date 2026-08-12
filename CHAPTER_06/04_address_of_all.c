#include<stdio.h>
int main()
{
    int age =22;
    int *ptr = &age;
    int **pptr = &ptr;
    int _age = **pptr;

    printf("%u\n", &age);
    printf("%u\n", ptr);
    printf("%d\n", &ptr);
    printf("%d\n", pptr);
    printf("%d\n", &pptr);

    return 0;
}