#include<stdio.h>
int main()
{
    int a[5]={5,10,4,3,8};
    int i,j;
    for( i=0;i<5;i++){
        for( j=i+1;j<5;j++){
            if(a[i]>a[j]){
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        printf("%d\t",a[i]);
    }
    return 0;
}