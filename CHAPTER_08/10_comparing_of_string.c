#include<stdio.h>
#include<string.h>
int main()
{
    char compare1[100];
    printf("String 1 : ");
    fgets(compare1, 100, stdin);

    char compare2[100];
    printf("String 2 : ");
    fgets(compare2, 100, stdin);

    printf("%d\n", strcmp(compare1, compare2));
    
    return 0;
}