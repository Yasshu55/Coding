//double linked list
#include"stdio.h"
struct node
{int info;
  struct node *next,*prev;
};
struct node *createlist(struct node *start);
struct node *addatbegin(struct node *start,int data);
struct node *addatend(struct node *start,int data);
struct node *addtoempty(struct node *start,int data);
struct node *deleteatbegin(struct node *start);
struct node *deleteatend(struct node *start);
struct node *deleteusingdata(struct node *start,int data);
void display(struct node *start);
void main()
{
struct node *start=NULL;
int ch,x,i;
printf("\nLinked List Implementatio\n ");
while(1)
{
printf("\nOperation that can be performed on the list\n") ;
printf("\n1-Create a list\n2-Display the list\n3-Add data atbegin\n4-Add data at end\n5-Add to emmpty");
printf("\n6-Deletion atbegin\n7-Deletion at end\n8-Deletion Using data\n9-Reverse\n");
scanf("%d",&ch);
switch(ch)
{


case 1:
start=createlist(start);
break;

case 2:
display(start);
break;

case 3:
{
printf("Enter data to add at begin");
scanf("%d",&x);
start=addatbegin(start,x);
break;
}

case 4:
{
printf("Enter data to add at end");
scanf("%d",&x);
start=addatend(start,x);
break;
}

case 5:
{
printf("Enter the data to be inserted");
scanf("%d",&x);
printf("Enter the position of data to be inserted");
scanf("%d",&i);
start=addtoempty(start,x);
break;
}


case 6:
{
start=deleteatbegin(start);
break;
}


case 7:
{
start=deleteatend(start);
break;
}


case 8: 
printf("Enter the data to be deleted:");
scanf("%d",&x);
start=deleteusingdata(start,x);
break;

case 9:

default :printf("Invalid option");
exit(0);
break;
}
}
}


struct node *createlist(struct node *start)
{
int n,i,data;
start=NULL;
printf("\n Enter no of nodes\n");
scanf("%d",&n);
if(n==0)
return start;


printf("\nEnter data");
scanf("%d",&data);
start=addatbegin(start,data);

for(i=2;i<=n;i++)
{
printf("Enter the data");
scanf("%d",&data);
start=addatend(start,data);
}
return start;
}





struct node *addatbegin(struct node *start,int data)
{
struct node *tmp;
tmp=(struct node *)malloc(sizeof(struct node));
tmp->info=data;
tmp->prev=NULL;
tmp->next=start;
start=tmp;
return start;
}




struct node *addatend(struct node *start,int data)
{
struct node *p,*tmp;
tmp=(struct node *)malloc(sizeof(struct node));
tmp->info=data;
p=start;
while(p->next!=NULL)
p=p->next;
p->next=tmp;
tmp->next=NULL;
return start;
}



struct node *addtoempty(struct node *start,int data)
{
struct node *p,*tmp;
tmp=(struct node *)malloc(sizeof(struct node));
tmp->info=data;
tmp->prev=NULL;
tmp->next=NULL;
start=tmp;
return start;
}




void display(struct node *start)
{
struct node *p;
if(start==NULL)
printf("\nList is Empty!\n");
else
{
p=start;
while(p!=NULL)
{
printf("%d\t",p->info);
p=p->next;
}
}
}


struct node *deleteatbegin(struct node *start)
{ struct node *tmp,*p;
if(start==NULL)
{ 
printf("\nList is Empty\n");
return start; }
else

{
tmp=start;
start=start->next;
start->prev=NULL;
free(tmp);
return start;
}
}


struct node *deleteatend(struct node *start)
{
struct node *tmp,*p;
if(start==NULL)
{
printf("\nList is Empty\n");
return start;
}
tmp=start->next;
while(tmp->next!=NULL)
tmp=tmp->next;
tmp->prev->next=NULL;
free(tmp);
return start;
}


struct node *deleteusingdata(struct node *start,int data)
{
struct node *tmp,*p;
if(start==NULL)
{
printf("\nList is Empty\n");
return start;
}
if(start->next==NULL)
if(start->info==data)
{
tmp=start;
start=NULL;
free(tmp);
return start;
}
else
{
printf("element is not found\n");
if(start->info==data)
{
tmp=start;
start=start->next;
start->prev=NULL;
free(tmp);
return start;
}
tmp=start->next;
while(tmp->next!=NULL)
if(tmp->info==data)
{
tmp->prev->next=tmp->next;
tmp->next->prev=tmp->prev;
free(tmp);
return start;
printf("element %d is not found");
return start;
}
}
}
 

