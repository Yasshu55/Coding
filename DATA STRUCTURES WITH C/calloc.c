//sum using calloc
#include<stdio.h>
void main()
{
int *p,n,i;
int s=0;
printf("enter a value\n");
scanf("%d",&n);
p=(int*)calloc(n,sizeof(int));
for(i=0;i<n;i++)
{
scanf("%d",(p+i));
s=s+*(p+i);
}
printf("s=%d",s);
}

