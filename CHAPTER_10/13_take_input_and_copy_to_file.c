#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fptr = fopen("hello.c", "w");

    char name [50];
    int age;
    float cgpa;

    printf("Name : ");
    fgets(name, 50, stdin);
    name[strcspn(name, "\n")] = '\0';
    printf("Age : ");
    scanf("%d", &age);
    printf("CGPA : ");
    scanf("%f", &cgpa);

    fprintf(fptr, "Student name : %s\n", name);
    fprintf(fptr, "Student age : %d\n", age);
    fprintf(fptr, "Student CGPA : %f\n", cgpa);

    fclose(fptr);

    return 0;
}