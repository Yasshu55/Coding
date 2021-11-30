#include<stdio.h>
main()
{
int a[30],i,n,x,l=0,h,m,flag=0;
printf("enter the no of elements to be enetred in the array\n");
scanf("%d",&n);
printf("enter the elements to be entered\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the elements to be searched\n");
scanf("%d",&x);

h=n-1;
while(l<=h)
{
m=(l+h)/2;
if(a[m]==x)
{
flag=1;
break;
}
else
{
if(a[m]==x)
{
h=m-1;
}
else
{
l=m-1;
}
}
}
if(flag==1)
{
printf("element is present at the %d position\n",i++);
}
else
{
printf("element is not present\n");
}
}
