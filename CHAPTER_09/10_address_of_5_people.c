#include <stdio.h>
#include <string.h>

typedef struct address_of_5_people
{
    int hno;
    char block;
    char area[100];
    char city[50];
    char state[50];
} add;

void printadd(add people[], int n);

int main()
{
    // add people[] =
    // {
    //     {100, 'A', "Rajpur Colony", "North Delhi", "Delhi"},
    //     {101, 'B', "Hargovind Extension", "East Bihar", "Bihar"},
    //     {102, 'C', "Chandni Chowk", "West Kolkata", "Kolkata"},
    //     {103, 'D', "CDR Chowk", "South Odisha", "Odisha"},
    //     {104, 'E', "Jehanabad", "Patna", "Magadh"}
    // };

    add people[5];
    for(int i = 0; i < 5; i++)
    {
        printf("Address of person %d -\n", i+1);
        printf("House number : ");
        scanf(" %d", &people[i].hno);

        printf("Block : ");
        scanf(" %c", &people[i].block);
        getchar();

        printf("Area : ");
        fgets(people[i].area, 100, stdin);
        people[i].area[strcspn(people[i].area, "\n")] = '\0';

        printf("City : ");
        fgets(people[i].city, 50, stdin);
        people[i].city[strcspn(people[i].city, "\n")] = '\0';

        printf("State : ");
        fgets(people[i].state, 50, stdin);
        people[i].state[strcspn(people[i].state, "\n")] = '\0';

        printf("\n");
        printf("\n");
    }

    printadd(people,5);

    return 0;
}

void printadd(add people[], int n)
{
    printf("ADDRESS -\n");
    for(int i=0; i<n; i++)
    {
        printf("Person %d\n", i+1);
        printf("House number : %d\n", people[i].hno);
        printf("Block : %c\n", people[i].block);
        printf("Area : %s\n", people[i].area);
        printf("City : %s\n", people[i].city);
        printf("State : %s\n", people[i].state);
        printf("\n");
    }
}