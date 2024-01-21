#include<stdio.h>
int main()
{
    static int a[10][10];
int r,c,i,j,sum=0;
printf("Enter the row and column\n");
scanf("%d %d",&r,&c);
printf("enter the matrix\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        sum+=a[i][j];
    }
        printf(" sum of %drow is %d\n",i,sum);
        sum=0;
}
    for(j=0;j<r;j++){

for(i=0;i<c;i++){

        sum+=a[i][j];
    }
        printf("sum of %d column is %d\n",j,sum);
        sum=0;
}
return 0;
}