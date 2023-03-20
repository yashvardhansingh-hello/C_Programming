// Write a C program to use function to insert a sub-string in to given main string from a given position.
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    int j, i=0;
    char str1[20], str2[20], str3[50];
    clrscr();
    printf("Enter a string: ");
    gets(str1);
    printf("Enter another string: ");
    gets(str2);
    printf("Enter the index: ");
    scanf("%d", &j);
    int s = strlen(str1) + strlen(str2);
    while (i<j)
    {
        str3[i]=str1[i];
        i++;
    }
    for (int k = 0; k < strlen(str2); k++)
    {
        str3[i] = str2[k];i++;
    }
    for (int m = j; m < strlen(str1); m++)
    {
        str3[i] = str1[m];i++;
    }
    str3[i] = '\0';
    puts(str3);    
    getch();
}