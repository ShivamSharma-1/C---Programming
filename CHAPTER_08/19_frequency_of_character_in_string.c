#include<stdio.h>
#include<string.h>
void checker(char str[]);
int main()
{
    char string[100];
    printf("Enter string : ");
    fgets(string, 100, stdin);
    string[strcspn(string, "\n")] = '\0';

    printf("\n");

    checker(string);
    return 0;
}

void checker(char str[])
{
    int max = 0;
    char highest;
    for(int i=0; str[i] != '\0'; i++)
    {
        int count = 0;
        for(int j=0; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                count++;
            }
        }
        if(count >= max)
        {
            max = count;
            highest = str[i];
        }
    }
    printf("Most occuring character : '%c' \n", highest);
    printf("Times : %d\n", max);
}