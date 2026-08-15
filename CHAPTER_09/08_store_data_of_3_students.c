#include<stdio.h>
#include<string.h>

struct student
{
    char name[20];
    int roll;
    float cgpa;
    char grade;
};

int main()
{
    struct student s1;
    strcpy(s1.name, "SHIVAM SHARMA");
    s1.roll = 9465;
    s1.cgpa = 9.9;
    s1.grade = 'A';

    struct student s2;
    strcpy(s2.name, "JISHNU ARYAN SAHOO");
    s2.roll = 9466;
    s2.cgpa = 8.8;
    s2.grade = 'B';

    struct student s3;
    strcpy(s3.name, "SATYAJIT PATRA");
    s3.roll = 9467;
    s3.cgpa = 7.9;
    s3.grade = 'C';

    printf("Name : %s\n", s1.name);
    printf("Roll number : %d\n", s1.roll);
    printf("CGPA : %f\n", s1.cgpa);
    printf("Grade : %c\n", s1.grade);

    printf("\n");

    printf("Name : %s\n", s2.name);
    printf("Roll number : %d\n", s2.roll);
    printf("CGPA : %f\n", s2.cgpa);
    printf("Grade : %c\n", s2.grade);

    printf("\n");

    printf("Name : %s\n", s3.name);
    printf("Roll number : %d\n", s3.roll);
    printf("CGPA : %f\n", s3.cgpa);
    printf("Grade : %c\n", s3.grade);

    printf("\n");
    return 0;
}