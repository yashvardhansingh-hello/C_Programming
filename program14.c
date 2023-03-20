// The Number of Bits in an Integer
#include<stdio.h>

int countBit(int n){
    int count = 0;
    while (n > 1)
    {
        n /= 2;
        count += 1;
    }
    return count;
}

void main(){
    int n;
    printf("Enter an Integer: ");
    scanf("%d", &n);
    printf("The Number of Bits in The %d is %d", n, countBit(n));
}