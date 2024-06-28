#include<stdio.h>
#include<stdlib.h>
int stack[100],choice=0,front=-1,rear=-1,s,val;
void insert(){
    if (rear == s - 1)
        printf("Overflow \n");
    else
    {
        if (front == - 1)
    
        front = 0;
        printf("Element to be inserted in the Queue: ");
        scanf("%d", &val);
        rear = rear + 1;
        stack[rear] = val;
    }
}
void print(){
    int i;
    if(front == -1&&rear == -1){
        printf("Queue is empty.");
    }
    else{
        printf("Your queue is:");
    for(i=front;i<=rear;i++){
        printf("%d \t",stack[i]);
    }
    }
}
void delete(){
    if(front == -1&&rear == -1){
        printf("Queue is empty.");
    }
    else{
        front=front+1;
    }
}

int main(){
    printf("Enter the size of array:");
    scanf("%d",&s);
    while(1){
        printf("\n1. Insertion in Queue:");
        printf("\n2. Deletion in Queue:");
        printf("\n3. Show in Queue:");
        printf("\n4. Exit:");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1: insert();
            break;
            case 2: delete();
            break;
            case 3: print();
            break;
            case 4: exit(1);
            printf("\n");
            break;
            default: ("Invalid choice.");
        }
    }
}