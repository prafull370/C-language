#include<stdio.h>
int swap(int x, int y)  
{  
    int temp;  
    // temp=x+y;
  
    temp = x;  
    x    = y;  
    y    = temp;  
  
    // printf("After swapping: a = %d and b = %d\n", x, y); 
    return(x,y);
    // return (temp);
     
}  
  
int main()  
{  
    int a=10, b=20;  
  
    // printf("Enter values for a and b\n");  
    // scanf("%d%d", &a, &b);  
  
    // printf("Before swapping: a = %d and b = %d\n", a, b);  
  
    swap(a, b);  
  printf("swap value :%dand %d",a,b);
  // int s=swap(a,b);
  // printf("%d",s);
    return 0;  
}  
  
