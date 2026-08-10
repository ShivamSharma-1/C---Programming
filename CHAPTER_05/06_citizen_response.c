#include<stdio.h>
void namaste();
void heyy();
int main()
{
    printf("Enter 'I' if you are Indian.\nEnter 'A' if you are American.\nYou are Indian or American : ");
    char ch;
    scanf("%c", &ch);

    if(ch == 'I')
    {
        namaste();
    }
    else if(ch == 'A')
    {
        heyy();
    }
    return 0;
}
void namaste()
{
    printf("NAMASTE\n");
}

void heyy()
{
    printf("HEYY\n");
}
