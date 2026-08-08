#include<stdio.h>
int main()
{
    int marks;
    printf("Total marks got : ");
    scanf("%d", &marks);


    // using if else loops to seggeregate the marks with the unique grades
    if(marks < 33)
    {
        printf("Grade : C \n");
    }
    else if (marks >= 33 && marks < 70)
    {
        printf("Grade : B \n");
    }
    else if (marks >= 70 && marks < 90)
    {
        printf("Grade : A \n");
    }
    else if (marks >= 90 && marks <= 100)
    {
        printf("Grade : A+ \n");
    }
    else
    {
        printf("Enter correct marks \n");
    }
    return 0;
}