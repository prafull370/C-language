#include<stdio.h>
int main()
{
char ch[50];
FILE*fp;
fp=fopen("Test.txt","w");
if(fp==NULL){
    printf("can not open file");
    return 1;
}
printf("Enter the string");
gets(ch);
fputs(ch,fp);
fclose(fp);
return 0;
}