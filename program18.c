#include<stdio.h>

int fibbonaci(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else {
        return (fibbonaci(n-1) + fibbonaci(n-2));
    }
}

void main(){
    int n;
    printf("Ente an Integer: ");
    scanf("%d", &n);
    printf("Fibbonacci of %d: ", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibbonaci(i));
    }
    
}