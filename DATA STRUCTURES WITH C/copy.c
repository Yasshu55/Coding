//copy one list to another
#include<stdio.h>
void main()
{
int i,n,a[20],b[20];
printf("please enter n value\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("please enter an array element\n");
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("a[i]=%d",a[i]);
printf("\n");
}
for(i=0;i<n;i++)
b[i]=a[i];
for(i=0;i<n;i++)
{
printf("b[i]=%d",b[i]);
printf("\n");
}
}

