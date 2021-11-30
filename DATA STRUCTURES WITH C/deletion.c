#include<stdio.h>
main()
{
int a[10],b[10],i,j,k,n,p;
printf("enter the size of the array\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
printf("%d",a[i]);
printf("enter the position\n");
scanf("%d",&p);

for(i=p;i<n;i++)
{
b[i]=a[i+1];
}
for(i=0;i<p;i++)
b[i]=a[i];
for(i=0;i<n;i++)
printf("%3d",b[i]);
}


