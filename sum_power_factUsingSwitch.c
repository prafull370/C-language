#include<stdio.h>

#include<math.h>
int fact(int x)
{
int f=1;
for(int n=1;n<=x;n++){
    f=f*n;
}
return f;
}
int pow(int x,int y)
{
    int result;
    result=pow(x,y);
    return result;

}
int sum(x)
{
int sum,term;
while(x>0){
    term=x%10;
    sum=sum+term;
    x=x/10;
}
}
void main()
{
    int choice,x,y;
    printf("Enter a number");
    scanf("%d %d",&x,&y);
    printf("Choice a operation\n");
    printf("1.Factorial, 2.Power,3.Sum of digit");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("factorial:%d",fact(x));
        break;
        case 2:printf("power of number=%d",pow(x,y));
        break;
        case 3:printf("sum of digit=%d",sum(x));
        break;
        default:printf("Wrong choice");
    }
    getch();
}