#include<stdio.h>

int factorial(int n){
    if(n==1){
        return 1;
    }
    else if(n==0){
        return 0;
    }
    return n*factorial(n-1);
}

void main(){
    printf("The factorial of 8 is %d", factorial(5));
}