swapping numbers using call by value
#include<stdio.h>
void main()
{
int a,b;
printf("enter the values of a,b");
scanf("%d%d",&a,&b);
printf("the values of a,b before swapping%d%d",a,b);
swap(a,b);
printf("the values of a,b after swapping%d%d",a,b);
}
void swap(int x,int y)
{
int tmp;
tmp=x;
x=y;
y=tmp;
}


