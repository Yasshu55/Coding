//To Perfrm SELECTION SORTING
#include<stdio.h>
main()
{
int a[10],n,i,j,temp,min;
printf("enter size of array\n\n");
scanf("%d",&n);
printf("enter elements\n\n");

for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\n\n\n");


for(i=0;i<n;i++)
{
min=i;
for(j=i+1;j<=n-1;j++)
{
if(a[min]>a[j])
min=j;
}
if(i!=min)
{
temp=a[i];
a[i]=a[min];
a[min]=temp;
}
}

printf("\n\nS____sorted elements are\n\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\n");
}
