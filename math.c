#include<stdio.h>
#include<conio.h>
//this is math code in c
/* this is a multiple line comment*/
int main ()
{
int num;
printf("Enter a num ");
scanf("%d", &num);
if(num % 2 == 0){
    printf("The num is even %d", num);
} 
else{
    printf("The num is odd %d",num);
}
    return 0;
}