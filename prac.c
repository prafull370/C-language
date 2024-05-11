#include<stdio.h>
#define MAX
#define NULL
typedef struct Queue{
    int front,rear;
    int a [MAX];
}queue;
void insertQueue(int v,int *queue.front){
        if(queue.front==NULL)
        Q->front=Q->front+1;
        return v
}
void dltqueue(){

}
int isFull(queue Q){
        if(Q.front==0&&Q.rear==MAX-1||Q.rear+1==Q.front)
        return 1;
        else{
        return 0;
        }
}
int isEmpty(queue Q){
    if(Q.front==NULL)
    return 1;
    else
    return 0;
}

int main(){
    int ch,v;
    Q.front=Q.rear=NULL;
    while(ch!=5){
        printf("\n1. Insert in queue.");
        printf("\n2. Queue is fill.");
        printf("\n3. Queue is empty.");
        printf("\n4. Element delete.");
        printf("\n5. Exit.");
        printf("Enter your operation:");
        scanf("%d",&ch);
        switch(ch){
            case 1: printf("Enter your value:");
            scanf("%d",&v);
            insertQueue(v,&Q.front);
            break;
            case 2: isFull(&Q.front);
            break;
            case 3: isEmpty(&Q.rear);
            break;
            case 4:  dltqueue(v,&Q.front)
            break;
            case 5: exit(0);
            deafult()
        }
    }
}