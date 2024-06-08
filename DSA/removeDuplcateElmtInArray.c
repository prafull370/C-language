#include<stdio.h>
int main(){
    int arr[]={1,5,8,8,1,2,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
        // return i+1;
    }
    printf("\nArrays is:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}