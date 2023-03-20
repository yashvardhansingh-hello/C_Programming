// Write a C program to perform addition of two matrices.
#include<stdio.h>
#include<conio.h>
void O_matrix(int arr[3][3]){
    for (int r = 0; r < 3; r++){
        for (int c = 0; c < 3; c++){
            printf("%d\t", arr[r][c]);
            continue;
        }printf("\n");
    }
    printf("\n");
}
void main(){
    int matrix1[3][3] = {{1, 2, 2}, {2, 1, 8}, {1, 6, 7}};
    int matrix2[3][3] = {{1, 4, 2}, {3, 7, 5}, {9, 3, 6}};
    clrscr();
    O_matrix(matrix1);
    O_matrix(matrix2);
    for (int r = 0; r < 3; r++){
        for (int c = 0; c < 3; c++){
            matrix1[r][c] += matrix2[r][c];
            continue;
        }
    }
    O_matrix(matrix1);
    getch();
}