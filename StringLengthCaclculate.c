#include<stdio.h>
int strLength(const char*str)
{
    int length=0;
    for(int i=0;str[i]!='\0';i++)
    {
        length ++;
    }
    return length;
    }
    int main(){
        const char*yash="Hello";
        int length=strLength(yash);
        printf("Total length is: %d",length);
        return 0;
    }

// int main()
// {
//     char str[]="hello";
//     int length=0;
//     for(int i=0;str[i]!='\0';i++)
//     {
//         length ++;
//     }
//     printf("The length of string :%d",length);
//     return 0;
// }