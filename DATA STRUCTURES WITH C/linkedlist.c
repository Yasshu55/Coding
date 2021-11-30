//single linked list
#include<stdio.h>
struct node
{
int info;
struct node *link;
};
struct node *createlist(struct node *start);
struct node *addatbegin(struct node *start,int data);
struct node *addatend(struct node *start,int data);
struct node *addatpos(struct node *start,int data,int pos);
void display(struct node *start);
void main()
{
struct node *start=NULL;
int ch,n,data,pos;
while(1)
{
printf("\n1.create\n2.display\n3.addatbegin\n4.addatend\n5.addatgivenposition\n");
printf("\n enter choice\n");
scanf("%d",&ch);
switch (ch)
{
case 1:start=createlist(start);
break;
case 2:display(start);
break;
case 3:printf("enter the data to be inserted");
scanf("%d",&data);
start=addatbegin(start,data);
break;
case 4:printf("enter the data to be inserted");
scanf("%d",&data);
start=addatend(start,data);
break;
case 5:printf("enter the data to be inserted");
scanf("%d",&data);
printf("enter postion");
scanf("%d",&pos);
 start=addatpos(start,data,pos);
break;
default :printf("invalid option\n");
exit(0);
}
}
}
struct node *createlist(struct node *start)
{
int i,n,data,pos;
start=NULL;
printf("enter the n value");
scanf("%d",&n);
if(n==0)
return start;
printf("\nenter data");
scanf("%d",&data);

start=addatbegin(start,data);
for(i=2;i<=n;i++)
{
printf("\nenter data to be inserted");
scanf("%d",&data);
start=addatend(start,data);
}
return start;
}
void display(struct node *start)
{
struct node *p;
if(start==NULL)
{
printf("\nemptylist");
return;
}
p=start;
while(p!=NULL)
{
printf("%d",p->info);
p=p->link;
}
}
struct node *addatbegin(struct node *start,int data)
{
struct node *tmp;
tmp=(struct node *)malloc(sizeof(struct node));
tmp->info=data;
tmp->link=start;
start=tmp;
return start;
}
struct node *addatend(struct node *start,int data)
{
struct node *p,*tmp;
tmp=(struct node *)malloc(sizeof(struct node));
tmp->info=data;
p=start;
while(p->link!=NULL)
p=p->link;
p->link=tmp;
tmp->link=NULL;
return start;
}
struct node *addatpos(struct node *start,int data,int pos)
{
struct node *p,*tmp;
int i;
tmp=(struct node *)malloc(sizeof(struct node));
tmp->info=data;
if(pos==1)
{
tmp->link=start;
start=tmp;
return start;
}
else
p=start;
return start;
}
