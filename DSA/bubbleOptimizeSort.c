#include<stdio.h>
int main(){
    int n,temp,i,j;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d integer:",n);
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        int flag=0;
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j]; 
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
        break;
    }
    printf("Sorted array ascending order.");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    return 0;
}