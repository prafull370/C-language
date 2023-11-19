#include <stdio.h>
#include<conio.h>

int add(int a,int b)
{
  return a+b;
}
int sub(int c,int d)
{
  return c-d;
}
int multiply(int c,int d)
{
  return c*d;
}
int div(int c,int d)
{
  return c/d;
}
void main()
{
  int a,b;
  char ch;
  printf("choose your operation[+,-,*,/]: ");
  scanf("%c",&ch);
  printf("Enter two number: ");
  scanf("%d %d" ,&a, &b);
  
  switch(ch)
  {
    case'+':printf("sum=%d",a+b);
    break;
    case'-':printf("sub=%d",a-b);
    break;
    case'*':printf("multiply=%d",a*b);
    break;
    case'/':printf("div=%d",a/b);
    break;
    default:printf("Wrong choice");
  }
  getch();
}