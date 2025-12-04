#include <stdio.h>
#include <string.h>
typedef struct student
{
    int age;
    char name[20];
    float marks;
} student;


int main(){
    student ahmed;
    ahmed.age=21;
    strcpy(ahmed.name,"Ahmed");
    ahmed.marks=26.25;

}