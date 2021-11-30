//to perform matrix addition
#include<stdio.h>
void main()
{
int i,j,m,n,p,q,a[10][10],b[10][10],c[10][10];
printf("enter the rows and columns of A matrix\n");
scanf("%d%d",&m,&n);
printf("enter the rows and columns of B matrix\n");
scanf("%d%d",&p,&q);
if((m==p)&&(n==q))
printf("matrix add is possible");
else
printf("matrix add is not possible");


for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("enter the elements of a matrix\n");
scanf("%d",&a[i][j]);
}
}


printf("Matrix A\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%5d",a[i][j]);
}
printf("\n");
}


for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
printf("enter the elements of a matrix\n");
scanf("%d",&b[i][j]);
}
}

printf("Matrix B\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
printf("%5d",b[i][j]);
}
printf("\n");
}


printf("Matrix C\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
c[i][j]=a[i][j]+b[i][j];
printf("%5d",c[i][j]);
}
printf("\n");
}
}

