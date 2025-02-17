//
// Created by goczi_tibor on 3/5/2025.
//
enum Gender{MALE,FEMALE};
typedef struct
{
    int year, month,day;
}Date_t;


typedef struct
{
    char name[51];
    char neptunCode[9];
    char Birthplace[26];
    Date_t dateOfBirth;
    enum Gender gender;
    float examresult;
}Student_t;
#ifndef STUDENT_H
#define STUDENT_H
void readStudentDataIs(Student_t student);
void printStudent(Student_t student);
#endif //STUDENT_H

