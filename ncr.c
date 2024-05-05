#include<stdio.h> 

void main()
{
int fact(int);
int ncr(int,int);
int n,r,result;
n=5;
r=3;
// return = ncr (n,r);
printf("%d",result);    
}
int fact(int x)
{
    int i, f=1;
    for(i=1;i<=x;i++)
    f=f*i;
    return f;
}
int ncr(int n, int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}