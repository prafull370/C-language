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
void deleteNode(node* root,int value);
int main(){
    node *root=NULL;
    int val=0;
    int ch;
    while(1){
        printf("\n1. for insertion");
        // printf("\n2. for Delete");
        printf("\n3. for inorder");
        printf("\n4. for Exit.\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("\nEnter the value");
                scanf("%d",&val);
                insert(&root,val);
                break;
            case 2:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                root = deleteNode(root, value);
                break;
            case 3:
                inorder(root);
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("\nInvalid choice");
                break;
        }
    }
}
