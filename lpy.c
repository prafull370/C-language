#include<stdio.h>
int main(){
    int year;
    printf("enter a year: ");
    scanf("%d",&year);
    //leap year is perfectly dib by 400
    if (year % 400 == 0)
    {
     printf("%d is a leap year",year);   
    }
    else if ("year % 100 == 0"){
        printf("%d is not a leap yerar",year);
    }
    else if ("year % 4 == 0"){
        printf("%d year is a leap year",year);
    }
    else {
        printf("%d is not a leap year",year);
    }
    return 0;
}