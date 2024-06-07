#include<stdio.h>
#include<stdlib.h>
int main(){
    // int 
    int arrs[]={10,20,50,5,3,2,1};
    int n=sizeof(arrs)/sizeof(arrs[0]);
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arrs[j]<arrs[min]){
                min=j;
            }
            else{
                int temp=arrs[j];
                arrs[j]=arrs[min];
                arrs[min]=temp;
            }
        }
    }
    printf("\nYour shorted array using selection sort.");
    for(int i=0;i<n;i++){
        printf("%d ",arrs[i]);
    }
    return 0;
}