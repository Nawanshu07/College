// WAP to read n records of the students like name , three subjects marks and roll number and calculate total and percentage as well as result using structure . Display output like as follow :     sno. roll number name  sub 1  sub-2  sub 3 total  percentage

#include <stdio.h>

struct Student
{
    int roll_number;
    char name[50], Result;
    int marks[3];
    int total;
    float percentage;
};

int main()
{
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter details for student %d\n", i + 1);

        printf("Roll Number: ");

        scanf("%d", &students[i].roll_number);

        printf("Name: ");

        scanf("%s", students[i].name);

        printf("Marks in 3 subjects: ");
        students[i].total = 0;

        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &students[i].marks[j]);
            students[i].total += students[i].marks[j];
        }
        students[i].percentage = students[i].total / 3.0;
    }

    for (int i = 0; i < n; i++)
    {
        if (students[i].percentage <= 100 && students[i].percentage >= 0)
        {
            if (students[i].percentage > 80)
            {
                students[i].Result = 'A';
            }
            else if (students[i].percentage > 65)
            {
                students[i].Result = 'B';
            }
            else if (students[i].percentage > 50)
            {
                students[i].Result = 'C';
            }
            else
            {
                students[i].Result = 'D';
            }
        }
    }

    printf("\nS.No\tRoll Number\tName\t Subject 1\tSubject 2\tSubject 3\t Total \t Percentage \t Grade\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t %d\t\t %s\t %d\t %d\t %d\t %d\t %d\t %c\n", i + 1, students[i].roll_number,
               students[i].name,
               students[i].marks[0],
               students[i].marks[1],
               students[i].marks[2],
               students[i].total,
               students[i].percentage , students[i].Result);
    }

    return 0;
}