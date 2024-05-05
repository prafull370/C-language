#include<stdio.h>
void name(char arr[])
{
    for(int i=0;i!='\0';i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
}
int main()
{
    // char firstname[50],secondname[50];
    // scanf("%s",firstname);
    // printf("your name is:%s \n",firstname);
    // scanf("%s",secondname);
    // printf("your second name is: ",secondname);
    //     return 0;
    char fullname[100];
    fgets(fullname,100,stdin);
     puts(fullname);
     return 0;


}