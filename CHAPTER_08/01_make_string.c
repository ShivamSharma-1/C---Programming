#include<stdio.h>
void printstring(char arr[]);
int main()
{
    char a[] = "APNA";
    char b[] = "COLLEGE";
    printstring(a);
    printstring(b);

    return 0;
}
void printstring(char arr[])
{
    for(int i=0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}