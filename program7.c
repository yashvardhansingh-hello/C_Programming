// Write a C program to find the factorial of a given integer using non-recursive function.
#include<stdio.h>
#include<conio.h>
void main(){
    int n, fact = 1;
    clrscr();
    printf("Enter an Integer: ");
    scanf("%d", &n);
    while (n!=1)
    {
        fact *= n--;
    }
    printf("The factorial is %d", fact);
    getch();
}