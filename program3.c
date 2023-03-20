//Write a C program to Check whether given number is Armstrong Number or Not.
#include<stdio.h>
#include<conio.h>
void main(){
    int n, arm_Num=0;
    clrscr();
    printf("Enter an Integer: ");
    scanf("%d", &n);
    int m = n;
    while(n != 0)
    {
        arm_Num += (n%10)*(n%10)*(n%10);
        n /= 10;
    }
    if(arm_Num==m)
    {
        printf("%d is an armstrong integer", m);
    }
    if(arm_Num!=m)
    {
        printf("%d is not an armstrong integer", m);
    }
    getch();
}