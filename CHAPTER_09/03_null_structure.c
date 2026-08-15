#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    int roll;
    float cgpa;
};

int main ()
{
    struct student s1 = {"SHIVAM", 9465, 9.9};
    struct student s2 = {0};

    printf("student name : %s\n", s1.name);
    printf("Student roll number : %d\n", s1.roll);
    printf("Student cgpa : %f\n", s1.cgpa);

    printf("\n");

    printf("student name : %s\n", s2.name);
    printf("Student roll number : %d\n", s2.roll);
    printf("Student cgpa : %f\n", s2.cgpa);

    return 0;
}