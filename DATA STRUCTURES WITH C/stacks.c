//PROGRAM FOR STACKS

#include<stdio.h>
#define max 5
int stack[max];
int top=-1;
void push(int data);
int pop();
int peek();
void display();
void main()
{
int ch,i,data;
while(1)
{
printf("\n1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("enter data");
scanf("%d",&data);
push(data);
break;
case 2:printf("%d is deleted from stack",pop());
break;
case 3:printf("%d is on top of the stack",peek());
break;
case 4:display();
break;
case 5:exit(0);
break;
default:printf("\ninvalid");
}
}
}
void push(int data)
{
if(top==max-1)
{
printf("\nstack is overflown\n");
exit(0);
}
top=top+1;
stack[top]=data;
}

int pop()
{
int i;
if(top==-1)
{
printf("\nstack is underflown");
exit(0);
}
i=stack[top];
top=top-1;
return i;
}

int peek()
{
int i;
if(top==-1)
{
printf("\nstack isempty");
return i;
}
else
return stack[top];
}

void display()
{
int i;
if(top==-1)
{
printf("\nstack is empty");
exit(0);
}
for(i=top;i>=0;i--)
printf("%d\n",stack[i]);
}
