#include<stdio.h>
#include<string.h>
int vowels(char str[100]);
int main()
{
    char alphabet[100];
    printf("Enter word or alphabets : ");
    fgets(alphabet, 100, stdin);
    alphabet[strcspn(alphabet, "\n")]='\0';
    
    printf("Total vowels : %d\n", vowels(alphabet));
    return 0;
}

int vowels(char str[100])
{
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
             str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
             {
                printf("%c\t", str[i]);
                count++;
             }
    }
    printf("\n");
    return count;
}