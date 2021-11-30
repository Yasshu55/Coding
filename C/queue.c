#include<stdio.h>
#include<stdlib.h>
#define MAX 20
int front=-1,rear=-1,q[MAX];
int isfull()
{
if(rear==MAX-1)
return 1;
else
return 0;
}
int isempty()
{
if(front==-1)
return 1;
else
return 0;
}
void insertion(int el)
{
if(isfull()){
printf("Queue is full");
return;
}
if(front==-1)
front=0;
rear++;
q[rear]=el;
}
int deletion()
{
int el;
if(isempty())
{
printf("Queue is empty");
exit(1);
}
el=q[front];
front++;
if(front==rear+1)
front=rear=-1;
return el;
}
void display()
{
int i;
if(isempty())
{
printf("Queue is empty");
return;
}
printf("\nQueue elements:");
for(i=front;i<=rear;i++)
printf("\t%d",q[i]);
}

main()
{
int el,option;
while(1)
{
printf("\n1.INSERTION");
printf("\n2.DELETION");
printf("\n3.DISPLAY");
printf("\n4.EXIT");
printf("\nenter your choice");
scanf("%d",&option);
switch(option)
{
case 1: printf("enter element to insert");
scanf("%d", &el);
insertion(el);
break;
case 2: el=deletion();
printf("\ndeleted element is %d",el);
break;
case 3: display();
break;
case 4: exit(1);
default: printf("enter correct choice");
}
}
}
