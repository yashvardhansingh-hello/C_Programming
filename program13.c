// Write a C program to find the length of the string using Pointer.
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    char str[20];
    printf("Enter a string: ");
    gets(str);
    int s=0;
    char *ptr = str;
    while(*(ptr+s)!='\0')
    {
        s++;
    }
    printf("The size of string: %d", s);
    getch();
}