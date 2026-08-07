#include <stdio.h>
int main()
{
    char n;
    printf("What's n? \n");
    scanf("%c", &n);

    printf("%d \n", n >= '0' && n <= '9');
    return 0;
}