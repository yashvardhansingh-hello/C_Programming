//Write a C program to find the sum of individual digits of positive integer.
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int m = 0, n = 526;
    while(n != 0)
    {
        m += n%10;
        n /= 10;
    }
    printf("The sum of Individual digits: %d", m);
    getch();
}