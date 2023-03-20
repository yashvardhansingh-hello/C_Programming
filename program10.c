// Write a C program that uses functions to perform Multiplication of Two Matrices.
#include<stdio.h>
#include<conio.h>
void multiplyMatrix(int mat1[3][3], int mat2[3][3], int sol[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 3; k++){
                sol[i][j] += mat1[i][k]*mat2[k][j];
            }
        }
    }
}
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
    clrscr();
    int matrix1[3][3] = {{1, 2, 2}, {2, 1, 8}, {1, 6, 7}};
    int matrix2[3][3] = {{1, 4, 2}, {3, 7, 5}, {9, 3, 6}};
    int res[3][3] = {0};
    multiplyMatrix(matrix1, matrix2, res);
    O_matrix(res);
    getch();
}