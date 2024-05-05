#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    char s[100];
    fp=fopen("one.txt","w");
    
    printf("Enter your string which you want to add: \n");
        scanf("%s",s);
        // gets(s);
        // puts(s);

    
    // strcat(ch,"\t");
    fputs(s, fp);
    
    fclose(fp);
    return 0;
}