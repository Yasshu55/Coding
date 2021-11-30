#include<stdio.h>
#include<stdlib.h>
int stack[3],count=0,x,i;
void push(int x)
{
if(count==0)
{
printf("list is empty\n");
}
else
{
stack[count]=x;
}
}
int pop()
{
if(count==0)
{
printf("list is empty\n");
}
else
{
x=stack[count];
count--;
printf("popped element is %d",x);
}
}
void display()
{
if(count==0)
{
printf("list is empty\n");
}
else
{
for(i=count;i>0;i--)
{
printf("%d\t",stack[i]);
}
}
}
main()
{
int ch,x;
while(1)
{
printf("enter your option\n");
printf("1.push\n2.pop\n3.display\n4.exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("\n enter the element\n");
scanf("%d",&x);
count++;
push(x);
break;
case 2:x=pop();
break;
case 3:display();
break;
case 4:exit(0);
default:printf("enter correct option\n");
break;
}
}
}
