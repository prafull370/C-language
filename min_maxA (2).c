#include<stdio.h>
int main()
{
    int size,i,a[100],max,min;
    printf("Enter size of array: ");
    scanf("%d",&size);
    printf("Enter element of array: \n");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
     max=a[0];
    min=a[0];
    for ( i = 0;i<size ; i++)
    {
        if (a[i] > max)
        {
        max=a[i];
        }
    
        if (a[i]<min)
        {
          min=a[i];
        }
        
        
    }
    printf(" maximum element of array: %d\n",max);
    printf("minimum element of array : %d\n",min);
    return 0;

    
}