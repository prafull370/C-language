#include<stdio.h>
#include<stdlib.h>
int main(int argc,char * argv[]){
    char ch;
    FILE *fptr1,*fptr2;
    fptr1=fopen(argv[1],"r");
    fptr2=fopen(argv[2],"w");
    if(argc!=3){
        printf("argument is not sufficient");
    }
    if(fptr1==NULL||fptr2==NULL){
        printf("unable to open a file");
    }
    while((ch=fgetc(fptr1))!=EOF){
        fputc(ch,fptr2);
    }
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}