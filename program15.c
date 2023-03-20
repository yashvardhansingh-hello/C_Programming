#include<stdio.h>
#include<stdlib.h>

struct threeNum
{
    int n1, n2, n3;
};


void main(){
    FILE *fptr;
    struct threeNum num;
    fptr = fopen(".\\srt.bin", "wb+");
    for (int i = 0; i < 5; i++)
    {
        num.n1 = i;
        num.n2 = i*i;
        num.n3 = num.n2 + 5;
        fwrite(&num, sizeof(struct threeNum), 1, fptr);
    }
    fclose(fptr);
}