#include<stdio.h>
#include<string.h>
void main()
{
    int i;
    FILE *fp;
    char ch[50]={"I love coding"};
    fp=fopen("new.txt","w");
    if(fp==NULL){
        printf("can not open the file");
    }
    for(i=0;i<strlen(ch);i++)
    {
        fputc(ch[i],fp);
    }
    fclose(fp);
}