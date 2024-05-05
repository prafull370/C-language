#include<stdio.h>
int main()
{
    int n,f,s,i;
    printf("Enter a number n(n>2) : ");
    scanf("%d", &n);
    int fib;
    f=0;
    s=1;
    printf("%d\t",f);
    printf("%d\t",s);
    for(i=2;i<n;i++)
    {
        fib=f+s;
        printf("%d\t",fib);
        f=s;
        s=fib;
    }
    return 0;

   } 