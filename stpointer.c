#include<stdio.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main()
{
    struct student s1={155,7.5,"rohit"};
    // printf("student roll= %.1f\n",s1.cgpa);
    struct student *ptr=&s1;
    printf("student roll=%s\n",(*ptr).name);
return 0;
}