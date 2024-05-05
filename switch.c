#include<stdio.h>
int main()
{
    char day;
    //1-monday;2- tuesday; 3-wednesday so on
    printf("Enter a day:");
    scanf("%c",&day);
    switch (day)
    {
    case 'm' : printf("monday\n");
     break;
    case 't' : printf("tuesday\n");
     break;
    case 'w' : printf("wednesday\n");
     break;
    
    default: printf("not a valid day");
        // break;
    }
    return 0;

}