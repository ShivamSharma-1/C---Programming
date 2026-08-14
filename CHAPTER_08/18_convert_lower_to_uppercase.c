#include<stdio.h>
#include<string.h>
void convert(char str[]);
int main()
{
    char lowercase[100];
    printf("Enter lower case characters : ");
    fgets(lowercase, 100, stdin);
    lowercase[strcspn(lowercase, "\n")]='\0';

    printf("\n");

    convert(lowercase);
    return 0;
}

void convert(char str[])
{
    for(int i=0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    printf("Uppercase characters : ");
    puts(str);
}