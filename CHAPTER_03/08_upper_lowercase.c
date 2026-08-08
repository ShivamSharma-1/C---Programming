#include <stdio.h>
int main()
{
    char ch;
    printf("Enter character : ");
    scanf("%c", &ch);

    if(ch >='A' && ch <= 'Z')
    {
        printf("UPPERCASE \n");
    }
    else if (ch >='a' && ch <= 'z')
    {
        printf("LOWERCASE \n");
    }
    else
    {
        printf("Enter correct english letter \n");
    }
    return 0;
}