#include<stdio.h>
int main(){
    int i,j,s;
    printf("Enter your array size.");
    scanf("%d",&s);
    int arr[s];
    printf("Enter your array element:");
    for(i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }
    for(i=1;i<s;i++){
        int temp=arr[i];
        for(j=i-1;j>=0&&temp<arr[j];j--){
            arr[j+1]=arr[j];
        }
        arr[j]=temp;
    }
    printf("Sorting array in ascending order. ");
    for(i=0;i<s;i++){
        printf("%d",arr[i]);
    }
    return 0;
}