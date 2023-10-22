#include<stdio.h>
int main(){
    int marks;
     printf("Enter a marks:");
     scanf("%d",&marks);
    if (marks<30)
    {
        printf("fail");
    }
    else if(marks>=33 && marks<=70)
    {
        printf("A");
    }
    else{
        printf("A+");
    }

    return 0;
}