#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fptr = fopen("hello.c","r");

    char string[200];
    fgets(string, 200, fptr);

    int count = 0;
    for(int i = 0; string[i] != '\0'; i++)
    {
        if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u' || 
            string[i]=='A' || string[i]=='E' || string[i]=='I' || string[i]=='O' || string[i]=='U')
                {
                    count++;
                }
    }

    fclose(fptr);

    fptr = fopen("hello.c","a");

    fprintf(fptr, "\nTotal Vowels in this string : %d", count);

    fclose(fptr);

    return 0;
}