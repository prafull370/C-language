#include<stdio.h>
int fact(int n)
{
    if(n==0)
    {
        return (1);
    }
    else{
        return(n*fact(n-1));
    }
}
// int fact(int n){    // second method
//     if(n>1)
//     return n*fact(n)
//     else 
//     return 1;
// }
int main()
{
    int n;
    printf("Enter the number: \n");
    scanf("%d",&n);
    // int f=fact(n);
    // printf("factorial value is:%d",f);
    printf("factorial value is:%d",fact(n));
    return 0;
}