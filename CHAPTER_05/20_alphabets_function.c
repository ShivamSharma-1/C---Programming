#include <stdio.h>
void alpha(char ch);
int main()
{
    char ch;
    alpha(ch);
}
void alpha(char ch)
{
    for(char ch = 'a'; ch <= 'z'; ch++)
    {
        printf("%c\t", ch);
    }
}