#include <stdio.h>
#include <stdlib.h>

// Define the structure for a tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Utility function to create a new tree node
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

// Function to perform non-recursive in-order traversal
void inorderTraversal(struct Node* root) {
    if (root == NULL) {
        return;
    }

    struct Node* stack[100];
    int top = -1;
    struct Node* current = root;

    while (current != NULL || top != -1) {
        while (current != NULL) {
            stack[++top] = current;
            current = current->left;
        }

        current = stack[top--];
        printf("%d ", current->data);
        current = current->right;
    }
}

// Function to perform non-recursive post-order traversal
void postOrderTraversal(struct Node* root) {
    if (root == NULL) {
        return;
    }

    struct Node* stack1[100];
    struct Node* stack2[100];
    int top1 = -1, top2 = -1;

    stack1[++top1] = root;

    while (top1 != -1) {
        struct Node* node = stack1[top1--];
        stack2[++top2] = node;

        if (node->left) {
            stack1[++top1] = node->left;
        }
        if (node->right) {
            stack1[++top1] = node->right;
        }
    }

    while (top2 != -1) {
        struct Node* node = stack2[top2--];
        printf("%d ", node->data);
    }
}

// Function to insert nodes in level order
struct Node* insertLevelOrder(int arr[], int i, int n) {
    struct Node* root = NULL;
    if (i < n && arr[i] != -1) {
        root = newNode(arr[i]);
        root->left = insertLevelOrder(arr, 2 * i + 1, n);
        root->right = insertLevelOrder(arr, 2 * i + 2, n);
    }
    return root;
}

int main() {
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the values of the nodes in level order (use -1 for NULL nodes):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    struct Node* root = insertLevelOrder(arr, 0, n);

    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. In-order traversal\n");
        printf("2. Post-order traversal\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("In-order traversal of the binary tree is: ");
                inorderTraversal(root);
                printf("\n");
                break;
            case 2:
                printf("Post-order traversal of the binary tree is: ");
                postOrderTraversal(root);
                printf("\n");
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
    } while (choice != 3);

    return 0;
}
