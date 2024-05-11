#include<stdio.h>
void inputarr(int arr[][10],int r,int c){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                scanf("%d",&arr[i][j]);
            }
        }
}
void outputarr(int arr[10][10],int r,int c){
    printf("Your output is:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
void add(int arr1[10][10],int arr2[10][10],int arr3[10][10],int r,int c){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                arr3[i][j]=arr1[i][j]+arr2[i][j];
            }
        }
}

int mul(int arr1[10][10],int arr2[10][10],int arr3[10][10],int r,int c){
    printf("Your output is:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            for(int k=0;k<c;k++){
                arr3[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
}
void tranpose(int arr1[10][10],int arr3[10][10],int r,int c){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                arr3[i][j]=arr1[j][i];
            }
        }
}
int main(){
    int r,c,n,arr1[10][10],arr2[10][10],arr3[10][10];
    while(1){
    printf("1. Add matrix-\n");
    printf("2.  Multiply matrix-\n");
    printf("3.  Transpose matrix-\n");
    printf("4.  Exit.\n");
    printf("Enter your operation:");
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("Enter your Addition  matrix row and column size:");
        scanf("%d %d",&r,&c);
        printf("Enter your first matrix:");
        inputarr(arr1,r,c);
        printf("Enter your second matrix:");
        inputarr(arr2,r,c);
        add(arr1, arr2, arr3, r, c);
        outputarr(arr3,r,c);
        break;
        case 2:
        printf("Enter your Multiply  matrix row and column size:");
        scanf("%d %d",&r,&c);
        printf("Enter your first matrix:");
        inputarr(arr1,r,c);
        printf("Enter your second matrix:");
        inputarr(arr2,r,c);
        mul(arr1, arr2, arr3, r, c);
        outputarr(arr3,r,c);
        break;
        case 3:
        printf("Enter your Transpose  matrix row and column size:");
        scanf("%d %d",&r,&c);
        printf("Enter your matrix:");
        inputarr(arr1,r,c);
        transpose(arr1,arr3, r, c);
        outputarr(arr3,r,c);
        break;
        case 4:
        exit(0);
        default:
        printf("Invalid argument.");
        }
    }
}
