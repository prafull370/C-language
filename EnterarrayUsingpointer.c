#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    int *ptr = arr;
    int sum=0;

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr);
        // ptr++;
    }
        sum+=*ptr;

    printf("The elements of the array are: ");
    ptr = arr;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *ptr);
        // ptr++;
    }
        printf(" sum of array: %d",sum);

    return 0;
}