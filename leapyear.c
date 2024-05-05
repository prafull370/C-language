#include<stdio.h>  
#include<conio.h>  
void main() {  
    int year;  
    printf("Enter a year: ");  
    scanf("%d", &year);  
    if(((year%4==0) && (year%400==0)) || (year%100!=0))  
    {  
        printf(" is a leap year");  
    } else {  
        printf(" is not a leap year");  
    }  
    return 0;
}