#include<stdio.h>
void printArray(int *A,int n)
{
    for(int i=0;i<n;i++){
        printf("%d",A[i]);
    }
    printf(" \n");
}
void bubbleshort(int *A,int n)
{
for(int i=0;i<n-1 ;i++){

for (int j = 0; j<n-1-i; j++)
{
    if(A[j]>A[j+1]){
        int temp;
        temp=A[j];
        A[j]=A[j+1];
        A[j+1]=temp;
    }
}
}
}

int main()
{
    int A[]={12,25,35,9,10};
    int n=5;
    printArray(A,n);
    bubbleshort(A,n);
    printArray(A,n);
    return 0;
}