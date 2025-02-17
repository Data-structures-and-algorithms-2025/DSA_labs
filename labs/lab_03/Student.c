//
// Created by goczi_tibor on 3/5/2025.
//

#include <stdio.h>
#include "Student.h"
void ReadStudentDataIs(Student_t* pStudent)
{
    scanf("%[^\n]\n", pStudent->name);
    scanf("%[^\n]\n", pStudent->neptunCode);
    scanf("%[^\n]\n", pStudent->Birthplace);
    scanf("%d%d%d\n", &pStudent->dateOfBirth.year, &pStudent->dateOfBirth.month, &pStudent->dateOfBirth.day);
    scanf("%i\n", &pStudent->gender);
    scanf("%[^\n]\n", &pStudent->examresult);
}
void printStudent(Student_t student)
{
    printf("Student Name: %s\n", student.name);
    printf("NeptunCode: %s\n", student.neptunCode);
    printf("Birthplace: %s\n", student.Birthplace);
    printf("Date of birth: %d%d%d\n", student.dateOfBirth.year, student.dateOfBirth.month,student.dateOfBirth.day);
    printf("Gender: %i\n", student.gender);
    printf("Exam Result: %.2f\n", student.examresult);
}