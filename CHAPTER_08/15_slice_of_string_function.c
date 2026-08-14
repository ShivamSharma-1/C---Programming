#include<stdio.h>
#include<string.h>
void slice(char string[]);
int main()
{
    char string[100];
    printf("Original String : ");
    fgets(string, 100, stdin);
    string[strcspn(string, "\n")] = '\0';

    slice(string);

    return 0;
}

void slice(char string[])
{
    char temp[100];
    
    int n;
    printf("FROM : ");
    scanf("%d", &n);

    int m;
    printf("To : ");
    scanf("%d", &m);

    int j=0;
    for(int i = n; i <= m; i++, j++)
    {
        temp[j] = string[i];
    }
    temp[j] = '\0';
    puts(temp);
}