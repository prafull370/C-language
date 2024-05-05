#include <stdio.h>

int main()
{
    int opr;
    while (1)
    {
        printf("1. insert at beginning:\n");
        printf("2. insert at end:\n");
        printf("3. insert after element:\n");
        printf("4. delete at beginning:\n");
        printf("5. delete at end:\n");
        printf("6. delete after element:\n");
        printf("7. delete entire list:\n");
        printf("8. traversing:\n");
        printf("9. creation:\n");
        printf("10.search:\n");
        printf("11. Exit\n");
        printf("Enter choice for operations: ");
        scanf("%d", &opr);
        switch (opr)
        {
        case 1:

            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:

            break;
        case 6:

            break;
        case 7:

            break;
        case 8:

            break;
        case 9:

            break;
        case 10:

            break;
        case 11:
            exit(0);
        default:
            printf("Invalid choice! Please enter a valid option.\n");
        }
    }
    return 0;
}