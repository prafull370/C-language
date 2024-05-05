#include <stdio.h>
void swap(int *x, int *y)
{
    int t; 
    t = *x;
    *x = *y;
    *y = t;
 
    printf("Inside the Function:x =x= %d\ty = %d\n", *x, *y);
}

int main()
{
    int a = 10, b = 20;
    swap(&a, &b);
 
    printf("the value of:a = %d\t b = %d\n", a, b);
 
    return 0;
}
