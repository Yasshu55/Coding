//quick sort
#include<stdio.h>
#define max 50
void quciksort(int a[],int p,int n);
int partition(int a[],int p,int n);
void main()
{
int a[max],i,j,p,key,z;
int n;
printf("enter the size of array\n");
scanf("%d",&n);
printf("Enter %d elements into array\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n the array elements are \n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
printf("\n");
}
quicksort(a,0,n-1);
printf("\n the array elements in sorting are \n");
for(i=0;i<n;i++)
{
printf("%5d\t",a[i]);
}
}


void quicksort(int a[],int p,int n)
{
int q, pivot;
if(p<n)
{
q = partition(a,p,n);
quicksort(a,p,q-1);
quicksort(a,q+1,n);
}
}


int partition(int a[],int p,int n)
{
int pivot,j,i,temp;
i=p+n;
j=p;
pivot=a[n];
while(i<=j)
{
while(a[i]<pivot)
i++;
while(a[j]>pivot)
j--;
if(i<j)
{
temp=a[j];
a[j]=a[i];
a[i]=temp;
i++;
j--;
}
else
i++;
}
temp=pivot;
a[n]=a[j];
a[j]=temp;
return j;
}
