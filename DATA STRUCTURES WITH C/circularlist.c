#include<stdio.h>
struct node
{
int info;
struct node*link
};
struct node *createlist(struct node *last);
 struct node *addtoempty(struct node *last,int data);
struct node *addatbegin(struct node *last,int data);
 struct node *addatend(struct node *last,int data);
struct node *deleteatbegin(struct node *last);
 struct node *deleteatend(struct node *last);
struct node *addatpos(struct node *last,int pos,int data);
 struct node *deleteusingdata(struct node *last);
void display(struct node *last)
void main()
{
struct node *last=NULL;
int data,n,ch,pos;
printf("circular linked list\n");
while(1)
{
printf("\nOperation that can be performed on the list\n") ;
printf("\n1-Create a list\n2-Display the list\n3-Add at begin\n4-Add at end\n5-Add at position\n);
printf("6-Deletion atbegin\n7-Deletion at end\n8-Deletion Using data\n");
scanf("%d",&ch);
switch(ch)
{
case 1: last=createlist(last);
break;
case 2: display(last);
break;
case 3:printf("add at begin\n");
scanf("%d",&data);
last=addatbegin(last,data);
break;
case 4:printf("add at end\n");
scanf("%d",&data);
last=addatend(last,data);
break;
case 5:c
scanf("%d",&data);
last=addatempty(last,data);
break;
case 6:printf("delete at begin\n");
last=deleteatbegin(last);
scanf("%d",&data);
last=deleteatbegin(last);
break;
case 7:printf("delete at end\n");
last=deleteatend(last);
scanf("%d",&data);
last=deleteatend(last);
break;
case 8:printf("deletion using data\n");
scanf("%d",&data);
last=deleteusingdata(last,data);
break;
case 9:printf("add at position");
scanf("%d",&data);
printf("Enter the position of data to be inserted");
scanf("%d",&pos);
last=addatpos(last,data,pos);
break;
default :printf("Invalid option");
exit(0);
break;
}
}
}
 

struct node *createlist(struct node *last);
{
struct node *last=NULL;
int n,i,data;
printf("enter the no of nodes\n");
scanf("%d",&n);
if(n==0)
printf("empty list\n");
return last;
printf("enter the data\n");
scanf("%d",&data);
last=addatempty(last,data);
for(i=2;i<n;i++)
{
printf("enter the data\n");
scanf("%d",&data);
last=addatend(last,data);
return last:

struct node *addatbegin(struct node *last;int data);
{
struct node *tmp;
tmp=(struct node *)malloc(sizeof(struct node));
tmp->info=data;
tmp->link=last->link;
last->link=tmp;
return last;
}

struct node *addatend(struct node *last;int data);
{
struct node *tmp;
tmp=(struct node *)malloc(sizeof(struct node));
tmp->info=data;
tmp->link=last->link;
last->link=tmp;
return last;
}


struct node *addtoempty(struct node *last;int data);
{
struct node *tmp;
tmp=(struct node *)malloc(sizeof(struct node));
tmp->info=data;
last=tmp;
last->link=last;
return last;
}


struct node *deleteatbegin(struct node *last);
{
struct node *tmp;
if(last==NULL)
{
printf("empty list\n");
return last;
}
tmp=last->link;
last=tmp;
last->link=tmp->link;
free(tmp);
return last;
}


struct node *deleteatend(struct node *last);
{
struct node *tmp;
if(last==NULL)
{
printf("empty list\n");
return last;
}
p=last->link;
while(p->link!=last)
p=p->link;
tmp=last;
p->link=last->link;
last=p;
free(tmp);
return last;
}

struct node *deleteusingdata(struct node *last);
{
struct node *tmp,*p;
if(last==NULL)
{
printf("empty list\n");
return last;
}
if(last->info==data)
{
tmp=last->link;
last->link=tmp->link;
free(tmp);
return last;
}
p=last->link;
while(p->link!=last)
{

{
tmp=p->link;
p->link=tmp->link;
free(tmp);
return last;
}
p=p->link;
if(last->info==data)
{
tmp=last;
p->link=last->link;


