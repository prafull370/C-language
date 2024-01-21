#include<stdio.h>
#include<string.h>
int main(){
char str[40];
printf("Enter a string to be reversed: ");
scanf("%s",str);
printf("after reverse: %s\t",strrev(str));
return 0;
}