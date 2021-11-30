// linear search
#include<stdio.h>
void main()
{
int i,k,n,a[10];
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
printf("\nenter an number\n");
scanf("%d",&k);
}
for(i=0;i<n;i++)
{
if (a[i]==k)
{
printf("element is found at %d\n",i);
break;
}}
if(i==n)
printf("element is not found\n");
}
