#include<stdio.h>
int rec(int n,int accu){
    if(n==0){
        printf("Recursion %d",accu);
        return 0;
    }
    else{
    rec n*rec(n-1);
    }
}
int main(){
    int n;
    int accu=0;
    printf("Enter your number.");
    scanf("%d",&n);
    printf("recursion:%d and accumulator:%d",rec(n,accu));
    return 0;
}