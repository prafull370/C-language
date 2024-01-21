#include<stdio.h>
#include<stdlib.h>
int main(int argc,char*argv[])
{
   FILE*fp1,*fp2;
   char ch;
   fp1=fopen(argv[1],"r");
   fp2=fopen(argv[2],"w");
if(argc!=3){
   printf("number of argument mismatch");
   exit(1);
}
if(fp1==NULL||fp2==NULL)
{
   printf("unable to open file");
}
while((ch=fgetc(fp1))!=EOF)
{
   fputc(ch,fp2);
}
 printf("one file copied successfully");
 fclose(fp1);
 fclose(fp2);
 return 0;
}