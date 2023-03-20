//Write a C program to check whether a number is strong number or not
#include<stdio.h>
#include<conio.h>
int factorial(int n){
    if(n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
void main(){
    int str_Num = 0, n, m;
    clrscr();
    printf("Enter an Integer: ");
    scanf("%d", &n);
    m = n;
    while(n != 0)
    {
        str_Num += factorial(n%10);
        n /= 10;
    }   
    if(m==str_Num)
    {
        printf("%d is a strong number.", m);
    }
    if(m!=str_Num)
    {
        printf("%d is not a strong number.", m);
    }
    getch();
}