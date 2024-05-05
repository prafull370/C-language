#include<stdio.h>
void swap(int *a,int*b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;

}
int main()
{
    int a=10,b=20;
    printf("%d %d",a,b);//actual value
    swap(&a,&b);
    printf("swap value is %d and %d",a,b);//after calling the function
    return 0;
}