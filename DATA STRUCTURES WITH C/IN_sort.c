//TO PERF0RM INSERTION SORTING
#include<stdio.h>
main()
{
int a[10],i,j,n,temp;
printf("enter size of array\n");
scanf("%d",&n);
printf("enter elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);


for(i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\n");


for(i=0;i<n;i++)
{
temp=a[i];
j=i-1;
while(j>=0 && temp<=a[j])
{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=temp;
}


printf("\n\tIN_____sorted elements are\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\n");
}
