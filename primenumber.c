#include<stdio.h>
#include<math.h>
int main ()
{
    int n, i,flag;
    printf("Enter your number: ");
    scanf("%d\n",&n);
    for(i=2;i<=sqrt(n);i++){
        if (n%i==0)
        {       
        flag=1;
        break;
        }
    }
    if (flag==0)
    {
     printf("given number is prime\n");

    }
    else
    printf("Given number is not prime\n");
    return 0;
    
}