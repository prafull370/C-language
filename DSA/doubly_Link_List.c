#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
    struct list *prev;
    int info;
    struct list *next;
} node;

// void insert_at_beginning(node **head, node **tail, int val);
//  void insertend(node **head1, int val);
// void insert_after_element(node **head1, int, int);
// void dlt_beg(node **head);
// void dlt_end(node **head);
// void dlt_list(node **head);
// void transversing(node *);


void insert_at_beginning(node **head1, node **tail1, int val)
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    temp->info = val;
    temp->prev = NULL;
    if ((*head1) == NULL)
    {
        temp->next = NULL;
        (*head1) = temp;
        (*tail1) = temp;
    }
    else
    {
        temp->next = (*head1);
        (*head1)->prev = temp;
        *head1 = temp;
    }
}

void insertend(node **head,node **tail, int val){
        node *temp;
        temp=(node*)malloc(sizeof(node));
        temp->info=val;
        temp->next=*tail;
        temp->prev=(*tail);
        (*tail)=temp->prev;
}
void transversing(node *head)
{
    while (head != NULL)
    {
        printf("%d->", head->info);
        head = head->next;
    }
}

int main()
{
    node *head = NULL;
    node *tail = NULL;
    int c, val, srch;
    while (1)
    {
        printf("\n");
        printf("1. insert at beginning\n");
        printf("2. insert at end\n");
        printf("3. insert after element\n");
        printf("4. delete at beginning\n");
        printf("5. delete at end\n");
        printf("6. delete after element\n");
        printf("7. delete entire list\n");
        printf("8. traversing\n");
        // printf("9. creation\n");
        printf("10.search\n");
        printf("11. transpose\n");
        // printf("12. transpose in reverse\n");
        printf("13.reverse linked list\n");
        printf("14. Exit\n");
        printf("Enter choice for operations: ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printf("enter value : ");
            scanf("%d",&val);
            insert_at_beginning(&head,&tail,val);
            break;
        case 2:
            printf("enter value : ");
            scanf("%d",&val);
            insertend(&head,&tail, val);
            break;
        case 3:
            printf("Enter value after you want add new value:");
            scanf("%d %d",&val,&srch);
            //insert_after_element(&head, val, srch);
            break;
        case 4:
            printf("Delete at beginning:");
            scanf("%d", &val);
            //dlt_beg(&head);
            break;
        case 5:
            printf("Delete at end");
            //dlt_end(&head);
            break;
        case 6:
            printf("Delete after element:");
            scanf("%d", srch);
            break;
        case 7:
            printf("Delete entire list");
            //dlt_list(&head);
            break;
        case 8:
            transversing(head);
            break;
        case 9:
            printf("not defined yet");
            break;
        case 10:
            printf("not defined yet");
            break;
        case 11:
            exit(0);
        default:
            printf("Invalid choice! Please enter a valid option.\n");
        }
    }
    return 0;
}
