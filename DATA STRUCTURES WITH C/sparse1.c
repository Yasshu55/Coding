//represent the sparse matrix
#include<stdio.h>
void main()
{
int p,q,i,j,m,c;
int a[30][30],b[10][30];
printf("\nenter rows&columns\n");
scanf("%d%d",&p,&q);
c=0;
printf("\nenter a matrix\n");
for(i=0;i<p;i++)
for(j=0;j<q;j++)
{
scanf("%d",&a[i][j]);
if(a[i][j]>0)
c++;
}
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
printf("%d",a[i][j]);
printf("\n");
}
b[0][0]=p;
b[0][1]=q;
b[0][2]=c;
m=1;
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
if(a[i][j]>0)
{
b[m][0]=i;
b[m][1]=j;
b[m][2]=a[i][j];
m++;
}
}
}
for(i=0;i<=c;i++)
{
for(j=0;j<3;j++)
{
printf("%d",b[i][j]);
}
printf("\n");
}
}
