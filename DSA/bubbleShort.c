#include<stdio.h>
int main(){
    int a[100],n,temp,i,j;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter %d integer:",n);
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("sorted array ascending order:");
    for(i=0;i<n;i++)
    printf("\t%d",a[i]);
    return 0;
}