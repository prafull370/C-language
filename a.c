#include<stdio.h>
void main() {
int marks=60;
char grade;
switch (marks)
{
case 60:
    grade='c';
    printf("%c",grade);
    case 70:
    grade='b';
    printf("%c",grade);
    case 80:
    grade='a';
    printf("%c",grade);
    break;
default:
    grade='e';
printf("%c",grade);
}
}