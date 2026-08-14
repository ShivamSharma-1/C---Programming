#include<stdio.h>
#include<string.h>
void space(char str[]);
int main()
{
    char string[100];
    printf("Enter string : ");
    fgets(string, 100, stdin);
    string[strcspn(string, "\n")] = '\0';

    space(string);
    return 0;
}
void space(char str[100])
{
    char newstr[100];
    char ch = ' ';
    int j = 0;
    for(int i=0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            continue;
        }
        else
        {
            newstr[j] = str[i];
            j++;
        }
    }
    newstr[j] = '\0';
    printf("\n");
    printf("New string : ");
    puts(newstr);
}