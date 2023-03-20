//Write a C program to find the roots of a quadratic equation.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int a, b, c, D;
    clrscr();
    printf("Enter coefficient of x²: ");
    scanf("%d", &a);
    printf("Enter coefficient of x: ");
    scanf("%d", &b);
    printf("Enter constant: ");
    scanf("%d", &c);
    D = sqrt(b*b - 4*a*c);
    if(D<0)
    {
        printf("There are no real roots");
    }
    if (D==0)
    {
        printf("The roots are equal and they are %d", (-b+D)/2*a);
    }
    if (D>0)
    {
        printf("The root is %d\n\n", (-b+D)/2*a);
        printf("The root is %d", (-b-D)/2*a);
    }
    getch();
}