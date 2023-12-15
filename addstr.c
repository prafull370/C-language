#include<stdio.h>
int main()
{
    int r,c,a[10][10],b[10][10],add[10][10],k,i,j;
    printf("Enter number of row : ");
    scanf("%d",&r);
    printf("Enter number of column: ");
    scanf("%d",&c);
    printf("Enter the first martrix = \n");
    for(i=0;i<r;i++) 
    {
        for(j=0;j<c;j++)
        {
    scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the Second matrix= \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Add of first and second matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            add[i][j]=0;
            
            add[i][j]=a[i][j]+b[i][j];
        }
    }
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
printf("%d\t",add[i][j]);    
}    
printf("\n");    
}    
return 0;  
}  