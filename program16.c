#include<stdio.h>
#include<stdlib.h>

struct threeNum
{
    int n1, n2, n3;
};


void main(){
    FILE *ptr;
    struct threeNum num;
    ptr = fopen(".\\srt.bin", "rb");
    for (int i = 0; i < 5; i++)
    {
    fread(&num.n1, sizeof(struct threeNum), 1, ptr);
    printf("%d\n", num.n1);
    printf("%d\n", num.n2);
    printf("%d\n", num.n3);
    }
}