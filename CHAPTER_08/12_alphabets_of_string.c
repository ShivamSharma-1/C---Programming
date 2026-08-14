#include<stdio.h>
void printstring(char arr[]);
int main()
{
    char firstname[] = "SHIVAM";
    char lastname[] = "SHARMA";
    printstring(firstname);
    printstring(lastname);

    return 0;
}
void printstring(char arr[])
{
    for(int i=0; arr[i] != '\0'; i++)
    {
        printf("%c\t", arr[i]);
    }
    printf("\n");
}