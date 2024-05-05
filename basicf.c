#include<stdio.h>
// #include<conio.h>

// {
//     int a,b;
//     char ch;
//     printf("Enter two number: ");
//     a
// }
int fun(int*a,int*b){
*a=*a+*b;
*b=*a-*b;
*a=*a-*b;
}
main()
{
    int x=10,y=20;
    fun(&x,&y);
    printf("x=%d y=%d\n,x,y");
}