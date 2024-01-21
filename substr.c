#include <stdio.h>
void inputa(int r, int c, int a[r][c]);
void inputb(int r, int c, int b[r][c]);
void sub(int r, int c, int a[r][c], int b[r][c]);
void outputa(int r, int c, int a[r][c]);

void inputa(int r, int c, int a[r][c])
{
    int i, j;
    printf("Enter  matrix: ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
void inputb(int r, int c, int b[r][c])
{
    int i, j;
    printf("Enter  matrix: ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
}

void outputa(int r, int c, int a[r][c])

{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

void sub(int r, int c, int a[r][c], int b[r][c])
{
    int i,j,sub[i][j];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sub[i][j] = 0;
            sub[i][j] = a[i][j] - b[i][j];
        }
    }
}
int main(){
    int r,c,a[10][10],b[10][10];
    printf("Enter row and column ");
    scanf(" %d  %d ",&r, &c);
    inputa(r,c,a);
    outputa(r,c,a);
     inputa(r,c,b);
    outputa(r,c,b );

    suba(r,c,a,b);

}

// int main()
// {
//     int r, c, i, j, a[10][10], b[10][10], sub[10][10], k;
//     printf("Enter number of rows : ");
//     scanf("%d", &r);
//     printf("Enter numbar of column: ");
//     scanf("%d", &c);
//     printf("Enter the first matrix: ");
//     for (i = 0; i < r; i++)
//     {
//         for (j = 0; j < c; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("Enter the second matrix: ");
//     for (i = 0; i < r; i++)
//     {
//         for (j = 0; j < c; j++)
//         {
//             scanf("%d", &b[i][j]);
//         }
//     }
//     printf("Subtract two matrix: ");

//     for (i = 0; i < r; i++)
//     {
//         for (j = 0; j < c; j++)
//         {
//            sub[i][j]=a[i][j]-b[i][j];
//         }
//         
//     }
//     for(i=0;i<r;i++){
    // for(j=0;j<c;j++){
        // printf("%d",sub[i][j]);
    // }
// }
//     return 0;
// }