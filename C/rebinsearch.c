#include<stdio.h>s
int rebinsearch(int a[10],int l,int h,int x)
{
int m;
if(l<=h)
{
m=(l+h)/2;
if(a[m]==x)
{
l=m+1;
return 1;
}
else if(a[m]>x)
{
rebinsearch(a,m+1,h,x);
}
}
}
void main()
{
int a[30],i,n,x,h,l,flag;
printf("**********_ _ _ _ _ _ _ _ _ _**********");
printf("\t\tbinary search\n");
printf("**********_ _ _ _ _ _ _ _ _ _ *********");
printf("enter the no of elements to be entered in the array\n");
scanf("%d",&n);
printf("enter the elements to be enetred");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the elements to be searched\n");
scanf("%d",&x);
l=0;
h=n;
flag=rebinsearch(a,l,h,x);
if(flag==1)
printf("the element is present\n");
else
{
printf("the element is not present\n");
}
