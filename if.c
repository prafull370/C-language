#include <stdio.h>
int main()
{ 
    int age;
    printf("Enter your age\n");
scanf("%d", &age);
printf("you have enter %d as your age\n",age);
if (age>18)
{
    printf("you can vote!");
}
else if(age>10) {
    printf("you are btw. 10 to 18 and after 14 you can vote");
}
else 
{
    printf("You can not vote");
}
    return 0;
}