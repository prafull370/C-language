#include<stdio.h>
#include<string.h>
struct student{
    char name[10];
    int age;
    int semester;
    int marks[5];
};
int main(){
    struct student s[10];
    int i,j;
    for(int  i=0;i<10;i++){
        printf("Enter student detail:%d\n",i+1);
        printf("Enter student name:");
        scanf("%c",&s[i].name);
        printf("Enter student age: \n");
        scanf("%d",&s[i].age);
        printf("Enter Semester: \n");
        scanf("%d",&s[i].semester);
        printf("Enter student marks: \n");
        for(int j=0;j<5;j++){
            printf("Sunject:%d\t",j+1);
            scanf("%d",&s[i].marks[j]);
        }
    }
    printf("Student name is%s\n",s[i].name);
    printf("Student age:%d\n",s[i].age);
    printf("Semester:%d\n",s[i].semester);
    printf("Marks:%d\n",s[i].marks[j]);
    return 0;
}