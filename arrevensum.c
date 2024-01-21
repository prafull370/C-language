#include<stdio.h>
int main()
{
    int sumeven=0,n,i,sumodd=0;
    printf("enter the array number");
    scanf("%d",&n);
    int a[n];
    printf("Enter the arr element:");
    for( i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    for( i=0;i<n;i++){
        if(a[i]%2==0){
            sumeven+=a[i];
        }
        else{
            sumodd+=a[i];
        }
    }
    printf("sum of even: %d",sumeven);
    printf("sum of odd :%d",sumodd);
    return 0;
}
