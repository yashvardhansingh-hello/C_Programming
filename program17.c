// Write a C program for creating a database value representer using C structures
#include<stdio.h>
#include<conio.h>
struct student
{
    char name[10];
    int rollNumber;
    int registrationNumber;
};
void main(){
    clrscr();
    struct student stud1 = {"yash", 2203, 22011};
    printf("%s, %d, %d", stud1.name, stud1.registrationNumber, stud1.rollNumber);
    getch();
}
