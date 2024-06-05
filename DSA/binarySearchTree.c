#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct root{
    int info;
    struct root* left;
    struct root* right;
}node;
void insert(node **root,int val){
    if(*root==NULL){
        node *temp;
        temp=(node *)malloc(sizeof(node));
        temp->left=temp->right=NULL;
        temp->info=val;
        *root=temp;
    }
    else if(val<(*root)->info){
    insert(&(*root)->left,val);
    }
    else if(val>(*root)->info){
        insert(&(*root)->right,val);
    }
}
void inorder(node *root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->info);
        inorder(root->right);
    }
}
int main(){
    node *root=NULL;
    int val=0;
    int ch;
    while(1){
        printf("\n1. for insertion");
        printf("\n2. for inorder");
        printf("\n3. for Exit.\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("\nEnter the value");
                scanf("%d",&val);
                insert(&root,val);
                break;
            case 2:
                inorder(root);
                break;
            case 3:
                exit(0);
                break;
            default:
                printf("\nInvalid choice");
                break;
        }
    }
}