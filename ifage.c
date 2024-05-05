#include<stdio.h>
int main()
{
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    if(age>18){
    printf("adult");
    printf("they can vote\n");
    printf("they can drive\n");
    }
    else
        printf("child");
    return 0;
}