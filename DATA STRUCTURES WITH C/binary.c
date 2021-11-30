//Binary search
#include<stdio.h>
void main()
{
int i,k,n,a[10],low,high,mid;
printf("enter a number\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter an array\n");
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("\nenter an number\n");
scanf("%d",&k);
low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if (k<a[mid])
high=mid-1;
else if (k>a[mid])
high=mid+1;
else if (k=a[mid])
{
printf("element is found \n");
break;}
printf("element is not found \n");
}
}
