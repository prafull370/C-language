
#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[]={5,2,1,8,5};
    int min;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
        printf(" min numbner is: %d. ",min);
}