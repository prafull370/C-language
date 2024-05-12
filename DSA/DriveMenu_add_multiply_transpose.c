#include <stdio.h>
#include <stdlib.h>

void inputmatrix(int ar[3][3]);
void outputmatrix(int ar[3][3]);
void matrixaddition(int ar[3][3], int ar2[3][3], int ar3[3][3]);
void matrixmultiplication(int ar[3][3], int ar2[3][3], int ar3[3][3]);
void matrixtranspose(int ar[3][3], int ar3[3][3]);

void inputmatrix(int ar[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
}

void outputmatrix(int ar[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
}

void matrixaddition(int ar[3][3], int ar2[3][3], int ar3[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ar3[i][j] = ar[i][j] + ar2[i][j];
        }
    }
}

void matrixmultiplication(int ar[3][3], int ar2[3][3], int ar3[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ar3[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                ar3[i][j] += ar[i][k] * ar2[k][j];
            }
            printf("%d\t", ar3[i][j]);
        }
        printf("\n");
    }
}

void matrixtranspose(int ar[3][3], int ar3[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ar3[j][i] = ar[i][j];
        }
    }
}

void main()
{
    int c;
    int ar[3][3], ar2[3][3], ar3[3][3];
    while (1)
    {
        printf("1. Matrix addition\n");
        printf("2. Matrix multiplication\n");
        printf("3. Matrix transpose\n");
        printf("4. Exit\n");
        printf("Enter choice for operations: ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printf("Enter elements for first matrix:\n");
            inputmatrix(ar);
            printf("Enter elements for second matrix:\n");
            inputmatrix(ar2);
            matrixaddition(ar, ar2, ar3);
            printf("Resultant matrix after addition:\n");
            outputmatrix(ar3);
            break;
        case 2:
            printf("Enter elements for first matrix:\n");
            inputmatrix(ar);
            printf("Enter elements for second matrix:\n");
            inputmatrix(ar2);
            matrixmultiplication(ar, ar2, ar3);
            break;
        case 3:
            printf("Enter elements for matrix:\n");
            inputmatrix(ar);
            matrixtranspose(ar, ar3);
            printf("Resultant matrix after transpose:\n");
            outputmatrix(ar3);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice! Please enter a valid option.\n");
        }
    }
    
}