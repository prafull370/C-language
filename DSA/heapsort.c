#include <stdio.h>
int size=10;
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int arr[], int N, int i)
{
    int larg = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    
    if (left < N && arr[left] > arr[larg])
        larg = left;
    if (right < N && arr[right] > arr[larg])
        larg = right;    
    if (larg != i) {
        swap(&arr[i], &arr[larg]);
        heapify(arr, N, larg);
    }
}
void heapSort(int arr[], int N)
{    
    for (int i = N / 2 - 1; i >= 0; i--)
        heapify(arr, N, i);   
    for (int i = N - 1; i >= 0; i--) { 
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}
void printArray(int arr[], int N)
{
    for (int i = 0; i < N; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    heapSort(arr, n);
    printf("Sorted array is\n");
    printArray(arr, n);
}
