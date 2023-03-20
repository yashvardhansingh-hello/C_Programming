//Write a C program to check whether given number is perfect number or Not.
#include<stdio.h>
#include<conio.h>
void main(){
    int sum = 0, n, per_Num = 0;
    clrscr();
    printf("Enter an Integer: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        if (n%i==0)
        {
            sum += i;
        }
    }
    if (n==sum)
    {
        printf("%d is a perfect number", n);
    }
    if (n!=sum)
    {
        printf("%d is not a perfect number", n);
    }
    getch();
}