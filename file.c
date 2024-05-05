#include<stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("new.1.txt","w");
    if(fp==NULL){
        printf("File can not open");
    }
    fclose(fp);

}