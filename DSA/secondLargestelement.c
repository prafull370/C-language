#include<stdio.h>
#include<stdlib.h>

int main(){
    int arr[]={1,5,0,4,8,8};
    int seclarg=-1;
        int larg=arr[0];
        int n=sizeof(arr)/sizeof(arr[0]);
        for(int i=0;i<n;i++){
            if(arr[i]> larg){
                larg=arr[i];
            }
        }
        printf("\n largeis :%d", larg);
        for (int i=0;i<n;i++){
            if(arr[i]>seclarg&&arr[i]!=larg){
                seclarg=arr[i];
            }    
        }
        printf("\nsecond large is :%d", seclarg);
        return 0;
    }
