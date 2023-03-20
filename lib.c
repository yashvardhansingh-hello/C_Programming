#include<stdio.h>

int factorial(int n){
    if(n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
}

void prnt_matrix(int (*ptr)[3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (j==2){
                printf("%d\n", *(*(ptr+i)+j));
                continue;
            }printf("%d\t", *(*(ptr+i)+j));
        }
    }
}

void calc() {
    float b,c,d=100;
    int a,e;
    printf("Hello sir/mam\n");
    while(e){
printf("choose any of them for calulation respectively\n");
printf("1 - addition\n");
printf("2 - subtraction\n");
printf("3 - multiplication\n");
printf("4 - division\n");
printf("5 - percentage\n");
printf("enter your choice");
scanf("%d",&a);
printf("enter first term :\n");
scanf("%f",&b);
printf("enter another term :\n");
scanf("%f",&c);
switch(a)
{case 1:
printf("term 1 + term 2 =%f\n",b+c);
break;
case 2:
printf("term 1 - term 2 =%f\n",b-c);
break;
case 3:
printf("term 1 * term 2 =%f\n",b*c);
break;
case 4:
printf("term 1 / term 2 =%f\n",b/c);
break;
case 5:
printf("term1/term2 percentage =%f\n",b/c*d);
break;
default:
printf("plaese enter valid choice \n");
}
printf("do you want to exit calculator\n");
printf("enter 0 to exit\n");
printf("enter 1 to continue the calculator\n");
scanf("%d",&e);    }
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int min_in_arr(int arr[], int n){
    int min = __INT_MAX__;
    for (int i = 0; i < n; i++){
        if(arr[i]<min)
            min = arr[i];
    }
    return min;
}

void I_matrix(int arr[3][3]){
    for (int r = 0; r < 3; r++){
        for (int c = 0; c < 3; c++){
            scanf("%d", &arr[r][c]);
        }
    }
}

void O_matrix(int arr[3][3]){
    for (int r = 0; r < 3; r++){
        for (int c = 0; c < 3; c++){
            if (c==2){
                printf("%d\n", arr[r][c]);
                continue;
            }
            
            printf("%d\t", arr[r][c]);
        }
    }
}


struct node
{
    int data;
    struct node *next;
};


void h(){
    FILE *fp;
    char ch;
    char str[100];
    fp = fopen("string_functions.txt", "a+");
    if(fp==NULL){
        printf("File Doesn't exist.\n");
    }
    do
    {
        ch = fgetc(fp);
        /*
        if (ch=='\n')
        {
            fputc('\n', fp);
        }
        */
        printf("%c", ch);
    } while (ch!=EOF);
    
    fclose(fp);
}