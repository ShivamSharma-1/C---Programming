#include<stdio.h>
#include<string.h>

struct student
{
    char name[50];
    int roll;
    float cgpa;
    char grade;
};

int main()
{
    struct student cse[10];
    cse[0].roll = 1;
    cse[0].cgpa = 7.6;
    cse[0].grade = 'B';
    strcpy(cse[0].name, "SHIVAM");

    cse[1].roll = 2;
    cse[1].cgpa = 8.6;
    cse[1].grade = 'A';
    strcpy(cse[1].name, "HELLO");

    cse[2].roll = 3;
    cse[2].cgpa = 3.4;
    cse[2].grade = 'D';
    strcpy(cse[2].name, "WORLD");

    cse[3].roll = 4;
    cse[3].cgpa = 5.4;
    cse[3].grade = 'C';
    strcpy(cse[3].name, "MEOW");

    cse[4].roll = 5;
    cse[4].cgpa = 8.9;
    cse[4].grade = 'A';
    strcpy(cse[4].name, "SHARMA");

    cse[5].roll = 6;
    cse[5].cgpa = 9.1;
    cse[5].grade = 'A';
    strcpy(cse[5].name, "JISHNU");

    cse[6].roll = 7;
    cse[6].cgpa = 8.9;
    cse[6].grade = 'A';
    strcpy(cse[6].name, "ABHINAV");

    cse[7].roll = 8;
    cse[7].cgpa = 8.1;
    cse[7].grade = 'B';
    strcpy(cse[7].name, "ADITIYA");

    cse[8].roll = 9;
    cse[8].cgpa = 10;
    cse[8].grade = 'A';
    strcpy(cse[8].name, "ANJALI");

    cse[9].roll = 6;
    cse[9].cgpa = 5.7;
    cse[9].grade = 'C';
    strcpy(cse[9].name, "MUSKAN");

    printf("Name of Student : %s\n", cse[0].name);
    printf("Roll number : %d\n", cse[0].roll);
    printf("CGPA : %f\n", cse[0].cgpa);
    printf("Grade : %c\n", cse[0].grade);
    printf("\n");

        printf("Name of Student : %s\n", cse[1].name);
    printf("Roll number : %d\n", cse[1].roll);
    printf("CGPA : %f\n", cse[1].cgpa);
    printf("Grade : %c\n", cse[1].grade);
    printf("\n");

        printf("Name of Student : %s\n", cse[2].name);
    printf("Roll number : %d\n", cse[2].roll);
    printf("CGPA : %f\n", cse[2].cgpa);
    printf("Grade : %c\n", cse[2].grade);
    printf("\n");

        printf("Name of Student : %s\n", cse[3].name);
    printf("Roll number : %d\n", cse[3].roll);
    printf("CGPA : %f\n", cse[3].cgpa);
    printf("Grade : %c\n", cse[3].grade);
    printf("\n");

        printf("Name of Student : %s\n", cse[4].name);
    printf("Roll number : %d\n", cse[4].roll);
    printf("CGPA : %f\n", cse[4].cgpa);
    printf("Grade : %c\n", cse[4].grade);
    printf("\n");

        printf("Name of Student : %s\n", cse[05].name);
    printf("Roll number : %d\n", cse[05].roll);
    printf("CGPA : %f\n", cse[05].cgpa);
    printf("Grade : %c\n", cse[05].grade);
    printf("\n");

        printf("Name of Student : %s\n", cse[0].name);
    printf("Roll number : %d\n", cse[0].roll);
    printf("CGPA : %f\n", cse[0].cgpa);
    printf("Grade : %c\n", cse[6].grade);
    printf("\n");

        printf("Name of Student : %s\n", cse[7].name);
    printf("Roll number : %d\n", cse[7].roll);
    printf("CGPA : %f\n", cse[7].cgpa);
    printf("Grade : %c\n", cse[7].grade);
    printf("\n");

        printf("Name of Student : %s\n", cse[8].name);
    printf("Roll number : %d\n", cse[8].roll);
    printf("CGPA : %f\n", cse[8].cgpa);
    printf("Grade : %c\n", cse[8].grade);
    printf("\n");

        printf("Name of Student : %s\n", cse[9].name);
    printf("Roll number : %d\n", cse[9].roll);
    printf("CGPA : %f\n", cse[9].cgpa);
    printf("Grade : %c\n", cse[9].grade);
    printf("\n");

    return 0;
}