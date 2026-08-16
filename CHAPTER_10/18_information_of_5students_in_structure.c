#include<stdio.h>
#include<string.h>
struct details
{
    char name[100];
    int marks;
    float cgpa;
    char course[100];
};
int main()
{
    FILE *fptr = fopen("hello.c","w");

    fprintf(fptr, "+---------------------------+------------+----------------+----------------------+\n");
    fprintf(fptr, "| %-25s | %-10s | %-14s | %-20s |\n","NAME","MARKS","CGPA","COURSE");
    fprintf(fptr, "+---------------------------+------------+----------------+----------------------+");

    struct details s[5];
    for(int i = 0; i < 5; i++)
    {
        printf("Name of student %d : ", i+1);
        fgets(s[i].name, 100, stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';

        printf("Marks of student %d : ", i+1);
        scanf("%d", &s[i].marks);
        getchar();

        printf("CGPA of student %d : ", i+1);
        scanf("%f", &s[i].cgpa);
        getchar();

        printf("Course of student %d : ", i+1);
        fgets(s[i].course, 100, stdin);
        s[i].course[strcspn(s[i].course, "\n")] = '\0';

        printf("\n");
    }

    for(int i = 0; i < 5; i++)
    {
        fprintf(fptr, "\n| %-25s | %-10d | %-14.3f | %-20s |\n", s[i].name,s[i].marks,s[i].cgpa,s[i].course);
        fprintf(fptr, "+---------------------------+------------+----------------+----------------------+");
    }

    fclose(fptr);

    return 0;
}