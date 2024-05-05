#include<stdio.h>
int fact(int n)
{
    int i,fact=1;
    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
int n;
    printf("Enter a Number to Find Factorial: ");
    scanf("%d",&n);
    int f= fact( n);
    printf("\nFactorial of a Given Number is: %d ",f);
    return 0;
}
