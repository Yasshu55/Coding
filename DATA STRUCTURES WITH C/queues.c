//QUEUES
#include<stdio.h>
#define max 5
int queue[max];
int rear=-1,front=-1;
void insertion(int data);
int delete();
int peek();
void display();
void main()
{
int ch,i,data;
while(1)
{
printf("\n1.insertion\n2.display\n3.deletion\n4.peek\n5.exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("enter data");
scanf("%d",&data);
insertion(data);
break;
case 2:printf("%d is deleted from queue",deletion());
break;
case 3:printf("%d is on top of the queue",peek());
break;
case 4:display();
break;
case 5:exit(0);
break;
default:printf("\ninvalid");
}
}
}
void insertion(int data)
{
if(rear==max-1)
{
printf("\nqueue is over flown");
exit(0);
}
if(front==-1)
front=0;

rear=rear+1;
queue[rear]=data;
}
int deletion()
{
int i;
if((front==-1)||(front==rear+1))
{
printf("\nqueue is underflown");
exit(0);
}
i=queue[front];
front=front+1;
return i;
}
int peek()
{
if((front==-1)&&(front==rear+1))
{
printf("\nqueue is underflown");
exit(0);
}
return queue[front];
}
void display()
{
int i;
if((front==-1)&&(front==rear+1))
{
printf("\nqueue is underflown");
exit(0);
}
for(i=front;i<=rear;i++)
printf("%d\t",queue[i]);
}
