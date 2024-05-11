#include <stdio.h>
#include<stdlib.h>
int stack[100], choice = 0,i, size, top = -1;

void push()
{
    int val;
    if (top == size)
    {
        printf("Stack overflow.\n");
    }
    else
    {
        printf("Enter value:");
        scanf("%d", &val);
        top = top + 1;
        stack[top] = val;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("Stack empty!");
    }
    else
    {
        top = top - 1;
    }
}
void show()
{
    for (i = top; i >= 0; i--)
    {
        printf("%d \t", stack[i]);
    }
    if (top == -1)
    {
        printf("Stack is empty.");
    }
}
int main()
{
    printf("Enter the Size of the stack :");
    scanf("%d", &size);
    while (1)
    {

        printf("\n1. For push:");
        printf("\n2. For pop:");
        printf("\n3. For show: ");
        printf("\n4. For exit:\n");
        printf("Enter your Choice here : ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            show();
            break;

        case 4:
            exit(1);
            break;

        default:
            printf("Plz select valid choice");
        }
    }
}
