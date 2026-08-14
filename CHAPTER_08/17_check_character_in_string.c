#include<stdio.h>
#include<string.h>
void checker(char str[]);
int main()
{
    char string[100];
    printf("Enter the string : ");
    fgets(string,100,stdin);
    string[strcspn(string,"\n")]='\0';

    checker(string);
    return 0;
}

void checker(char str[])
{
    char ch;
    printf("Enter character : ");
    scanf("%c", &ch);

    for(int i=0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            printf("YES\n%c is present.", ch);
            return;
        }
    }
    printf("NO\n%c is not present.", ch);
}