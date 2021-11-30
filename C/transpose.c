#include<stdio.h>
main()
{
int a[10][10],b[10][10],i,j,r,c;
printf("enter the no of rows and coloumns of the matrix\n");
scanf("%d%d",&r,&c);
printf("enter the elements of the matrix\n");
for(i=0;i<r;i++)
{for(j=0;j<c;j++)
{scanf("%d",&a[i][j]);}
}
printf("the elements of the matrix is\n");
for(i=0;i<r;i++)
{for(j=0;j<c;j++)
{printf("%d\t",a[i][j]);}
printf("\n");}
printf("the transpose of the matrix is\n");
for(i=0;i<r;i++)
{for(j=0;j<c;j++)
{b[j][i]=a[i][j];}
}
for(i=0;i<c;i++)
{for(j=0;j<r;j++)
{printf("%d\t",b[i][j]);}
printf("\n");}
}
