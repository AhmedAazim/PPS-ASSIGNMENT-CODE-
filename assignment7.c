#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    int marks[3];
    int total;
    float percentage;
};

int main()
{
    struct Student s[50];
    int n, i;

    printf("Enter the number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 50)
    {
        printf("Invalid number of students.");
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Enter roll number: ");
        if (scanf("%d", &s[i].roll) != 1)
        {
            printf("Invalid roll number.");
            return 0;
        }

        printf("Enter name: ");
        if (scanf("%49s", s[i].name) != 1)
        {
            printf("Invalid name.");
            return 0;
        }

        s[i].total = 0;

        for (int j = 0; j < 3; j++)
        {
            printf("Enter marks of subject %d: ", j + 1);

            if (scanf("%d", &s[i].marks[j]) != 1 ||
                s[i].marks[j] < 0 || s[i].marks[j] > 100)
            {
                printf("Invalid marks.");
                return 0;
            }

            s[i].total = s[i].total + s[i].marks[j];
        

        s[i].percentage = s[i].total / 3.0;
    }

    printf("\n--- STUDENT RESULT ---\n");
    printf("Roll No\tName\tSub1\tSub2\tSub3\tTotal\tPercentage\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\t%d\t%d\t%d\t%.2f%%\n",
               s[i].roll,
               s[i].name,
               s[i].marks[0],
               s[i].marks[1],
               s[i].marks[2],
               s[i].total,
               s[i].percentage);
    }

    return 0;
}
