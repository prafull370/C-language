#include<stdio.h>
void input(int a){
    for(int i=0;i<size;i++){
        scanf("%d",arr[i])
    }
}
void output(int arr[s]){
    for(int i=0;i<s;i++){
        printf("%d",arr[i]);
    }
}
int main(){
    int c,s;
    printf("Enter your array size:");
    scanf("%d",&s);
    int arr[s];
    while(1){
        printf("1. For Bubble sort.")
        printf("2. For Selection sort.")
        printf("3. For Insertion sort.")
        printf("4. For Exit.")
        printf("Enter your choice:");
        scanf("%d",&c);
        switch(c){
            case 1: printf("Enter your array.");
            input(a);
            bubble(int v)
            printf("Sorted array is:%d",output())
        }
    }
}