// Write a C Program to find whether the given matrix is symmetric or not.
#include<stdio.h>
#include<conio.h>
void main(){
    int matrix[3][3] = {{1, 2, 3}, {2, 5, 6}, {3, 6, 9}};
    clrscr();
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j]!=matrix[j][i])
            {
                printf("The matrix is not symmetric");
                return;
            }            
        }
    }
    printf("The matrix is symmetric");
    getch();
}