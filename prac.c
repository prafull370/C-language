#include<stdio.h>
void swap(int* a,int* b){
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
void heapshort(int arr[],int n){
  for(int i= n/2;i>=0;i--){
    int largest=i;
    int left=2*i;
    int right=2*i+1;
    if(right<n && arr[right]>arr[largest])
    largest=right;
  if(largest!=i){
    swap(arr[0],arr[i]);
    if(left<n && arr[left]>arr[right])
    largest=left;
  if(right<n &&arr[right]>arr[left])
  largest=right;
  }
  }
}
int main(){
  int n;
  printf("Enter the size of array: ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter your element for sorting: ");
  for(int i=1;i<=n;i++){
    scanf("%d",&arr[i]);
  }
  heapshort(arr,n);
  printf("Sorted array is: ");
  for(int i=1;i<=n;i++){
    printf("%d",arr[i]);
  }
}