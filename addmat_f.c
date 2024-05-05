#include<stdio.h>
void ina(int r,int c,int a[r][c]){
    int i,j;
    printf("Enter the matrix 1: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void inb(int r,int c , int b[r][c]){
int i,j;
    printf("Enter the matrix2: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
}
void printa(int r,int c,int a[r][c]){
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
void printb(int r,int c,int b[r][c]){

    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
}
void add(int r,int c,int a[r][c],int b[r][c]){
    int i,j,add[][];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            add[r][c]=0;
            add[r][c]=a[r][c]+b[r][c];
        }
    }
    for(i=0;i<r;i++){
        for ( j = 0; j < c; j++)
        {
            printf("%d\t",add[r][c]);
        }
        printf("\n");
    }
}
int main()
{
    int r,c,a[10][10],b[10][10],add[20][20];
    printf("Enter the Row and column:\n");
    scanf("%d %d",&r,&c);
    ina(r,c,a);
    // printa(r,c,a);
    inb(r,c,b);
    // printb(r,c,b);
    add(r,c,a,b);
    return 0;
}

