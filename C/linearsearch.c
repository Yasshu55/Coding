#include<stdio.h>
main()
{
int a[30],i,n,x,y=1,flag=0;
printf("enter the no of elements to be entered in the array\n");
scanf("%d",&n);
printf("enter the no of elements to be entered\n");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
printf("enter the elements to be searched\n");
scanf("%d",&x);
for(i=0;i<n;i++)
{if(a[i]==x)
{flag=1;
break;}
else
{y++;}
}
if(flag==1)
{printf("element is present after %dsearches\n",y);}
else
{printf("element is not present\n");}
}
