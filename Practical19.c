// This Program is prepared by 24CE017 Kavya
#include <stdio.h>

void displayWelcomeMessage()
{
    printf("Welcome to CHARUSAT University!\n");
}
int getNumberOfStudents()
{
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    return numStudents;
}
void collectAndDisplayGrades(int numStudents)
{
    for (int i = 1; i<= numStudents; i++)
    {
        float marks;
        printf("Enter the marks for student %d:",i);
        scanf("%f", &marks);
        printf("Student %d: Marks = %.2f\n", i, marks);
    }
}
float calculateAverageGrade(int numStudents)
{
    float sum = 0;
    for (int i = 1; i <= numStudents; i++)
    {
        float marks;
        printf("Enter the marks for student %d (for average calculation): ", i);
        scanf("%f", &marks);
        sum += marks;
    }
    return sum / numStudents;
}

void main()
{
    displayWelcomeMessage();
    int numStudents = getNumberOfStudents();
    collectAndDisplayGrades(numStudents);
    float average = calculateAverageGrade(numStudents);
    printf("The average marks of the student is: %.2f\n", average);

   printf("\n\n24Ce017_Kavya");

}

