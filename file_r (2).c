#include<stdio.h>
int main()
{
    char ch[50];
    FILE*fp;
    fp=fopen("ex.c","r");
    if(fp==NULL){
        printf("can not open file");
        return 1;
    }
    while(fgets(ch,49,fp)!=NULL){
        printf("%s",ch);
    }
    fclose(fp);
    return 0;
}