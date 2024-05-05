#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(float *)malloc(5*sizeof(float));
    ptr[0]=7;
    ptr[1]=8;
    ptr[2]=5;
    ptr[3]=2;
    ptr[4]=2;
    for(int i=0;i<=3;i++){
    printf("%f\n",i);
    }
    return 0;

}