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
    int n;
    printf("Enter for how many students : ");
    scanf("%d", &n);
    while (getchar() != '\n');  //  LEARN  THIS.

    struct student stud[n];
    for(int i=0; i<n; i++)
    {
        printf("Name of Student %d : ", i+1);
        fgets(stud[i].name, 50, stdin);
        stud[i].name[strcspn(stud[i].name, "\n")] = '\0';

        printf("Roll number : ");
        scanf("%d", &stud[i].roll);

        printf("CGPA :");
        scanf("%f", &stud[i].cgpa);

        printf("Grade : ");
        scanf(" %c", &stud[i].grade);   //  SPACE  BAR  IS  THERE.

        while (getchar() != '\n');

        printf("\n");
    }

    for(int i=0; i<n; i++)
    {
        printf("Name : %s\n", stud[i].name);
        printf("Roll number : %d\n", stud[i].roll);
        printf("CGPA : %f\n", stud[i].cgpa);
        printf("Grade : %c\n", stud[i].grade);
        printf("\n");
    }

    return 0;
}