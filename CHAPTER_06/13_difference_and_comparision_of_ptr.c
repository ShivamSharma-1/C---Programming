#include<stdio.h>
int main()
{
    int age = 22;
    int _age = 24;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("%u\n%u\nDifference = %d\n", ptr, _ptr, *ptr - *_ptr);

    _ptr = &age;
    printf("Comparison = %u\n", ptr == _ptr);

    return 0;
}