#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int info;
    struct node* next;
}node;
node* head;
void push( int val)
{
    node*temp = (node*)malloc(sizeof(node));
    if(temp == NULL) printf("Memory cannot be allocated");
    else
    {
        temp->info = val;
        temp->next = head;
        head=temp;
        printf("Element pushed to stack");
    }
}
int pop()
{
    if(head ==NULL)
    {
        printf("Node cannot be deleted as List is empty\n");
        return 0;
    }
    else
    {
    node* temp = head;
    head =head->next;
    return temp->info;
    }
}
void main()
{
    int option, flag = 1;
    int val;
    int ele;
    int result;
    node *head = NULL;
    while (flag)
    {
        printf("MENU \n");
        printf("1 : push\n");
        printf("2 : pop\n");
        printf("3 : Exit\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1: //Push Operation
                printf("Enter Value to Insert :\n");
                scanf("%d", &val);
                push(val);
                break;
        case 2: //Pop Operation
                int result = pop();
                if(result)
                {
                    printf("Popped element : %d\n ",result);
                }
                break;
        case 3: exit(1);
        default:
                printf("Choose a valid operation.");
        }
    }
}