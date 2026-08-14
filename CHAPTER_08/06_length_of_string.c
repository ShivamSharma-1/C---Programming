#include <stdio.h>
int length(char arr[]);
int main()
{
    char name[100];
    printf("Enter your name : ");
    fgets(name, 100, stdin);
    length(name);
    printf("Length : %d", length(name));

}
int length(char arr[])
{
    if(arr[100] == 0)
    {
        return 0;
    }
    int length = 0;
    for(int i = 0; arr[i] != '\0'; i++)
    {
        length++;
    }
    return length - 1;
}