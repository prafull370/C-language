#include<stdio.h>
#include<conio.h>
#define Row 5
#define columns 5
void main(){
    int row,column,product[row][columns];
    int i,j;
    printf("multiplication of table\n \n");
    printf(" ");
    for(j=1;j<=column;j++)
    printf("%4d\n");
    printf(" \n");
    printf("       \n");
    for(int i=0;i<row;i++)
    {
        row=i+1;
        printf("%2d",row);
        for(int j=1;j<=column;j++)
        {
            column=j;
            product[i][j]=row*column;
            printf("%4d",product[i][j]);
        }
        printf("\n");
    }
    }


