//reading and printing the matrix
#include<stdio.h>
void main()
{
int i,j,m,n;
int a[10][10];
printf("enter the rows and columns of matrix\n");
scanf("%d%d",&m,&n);
for(i=0;i<m;i++)
for(j=0;j<n;j++)
{
printf("enter the elements of a matrix\n");
scanf("%d",&a[i][j]);
}
for(i=0;i<m;i++)
for(j=0;j<n;j++)
{
printf("%5d",a[i][j]);
}
printf("\n");
}
