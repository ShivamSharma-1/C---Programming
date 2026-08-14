#include<stdio.h>
#include<string.h>
void change(char arr[]);
int main()
{
    char string[100];
    printf("Enter string : ");
    fgets(string,100,stdin);
    string[strcspn(string,"\n")] = '\0';

    change(string);
    return 0;
}

void change(char arr[])
{
    for(int i=0; arr[i] != '\0'; i++)
    {
        if(arr[i] >= 'a' && arr[i] <= 'z')
        {
            arr[i] -= 32;
        }
        else if(arr[i] >= 'A' && arr[i] <= 'Z')
        {
            arr[i] += 32;
        }
    }
    printf("New string : ");
    puts(arr);
}