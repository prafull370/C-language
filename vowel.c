#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character = ");
    scanf("%c",&ch);
    if(ch=='a'||ch=='A'||ch=='E'|| ch=='e'||ch=='i'|| ch=='I'||ch =='o'||ch=='O'||ch=='u'||ch=='U')
    {
        printf("%c its a vovel charater",ch);
    }
    else
    printf("%c it not a vewel ",ch);
    return 0;
}