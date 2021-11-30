#include<stdio.h>
main()
{
int a[10],i,n;
printf("enter the size of the array\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
printf("%d",a[i]);
for(i=n-1;i>=0;i--)
printf("%d",a[i]);
}
