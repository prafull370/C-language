#include<stdio.h>
#include<string.h>
int main()
{
   char s[100]="love",a[100]="coding";
//    char n[100];
      int i,j=strlen(s);
      for(i=0;a[i]!='\0';i++){
        s[i+j]=a[i];
      }
      s[i+j]='\0';
  
   printf("Concatenatestring:%s",s);
   return 0;
}