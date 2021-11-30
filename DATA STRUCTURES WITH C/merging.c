//merging of two array
#include<stdio.h>
void main()
{
int i,j,k,m,n,a[10],b[10],c[10];
printf("plz enter m and n values\n");
scanf("%d%d",&m,&n);
for(i=0;i<m;i++)
{
printf("enter an 1st array\n");
scanf("%d",&a[i]);
}
for(j=0;j<m;j++)
{
printf("enter an 2nd array\n");
scanf("%d",&b[j]);
}
for(i=0;i<m;i++)
{
printf("%d",a[i]);
}
for(j=0;j<m;j++)
{
printf("%d",b[j]);
}
for(i=0;i<m;i++)
c[i]=a[i];
for(k=m,j=0;j<n;j++,k++)
c[k]=b[j];
for(i=0;i<=(m+n-1);i++)
printf("%d",c[i]);
}

