#include "Student.h"
#include<stdio.h>
int main(void)
{
    Student_t student1=(Student_t){
        "Csengo Csenge","ASDSAD","Hunyad",{2000,03,04},1,8};
    printStudent(student1);

    return 0;

}