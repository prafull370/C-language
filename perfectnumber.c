#include<stdio.h>
int  main(){
    int i,n,sum=0;
    printf("Enter your number\n");
    scanf("%d",&n);
    for( i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }
    }
        if(sum==n&&n>0){
            printf("your number is perfect.");
        }
        else{
            printf("your number is not perfect.");
        }
    
}