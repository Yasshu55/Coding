//circular linked list
#include<stdio.h>
struct node 
{
int info;
struct node *link;
};
struct node *createlist(struct node *last);
struct node *addatbegin(struct node *last,int data);
struct node *addatend(struct node *last,int data);
struct node *addtoempty(struct node *last,int data);
struct node *delatbegin(struct node *last);
struct node *delatend(struct node *last);
struct node *delusingdata(struct node *last,int data);
void display(struct node *last);
void main()
{
struct node *last=NULL;
int i,n,ch,data;
printf("linked list implementation\n");
while(1)
{
printf("\n1.create\n2.display\n3.add at begin\n4.add at end\n5.add to empty\n");

printf("6.del at begin\n7.del at end\n8.del using data\nexit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:last=createlist(last);
break;
case 2:display(last);
break;
case 3:printf("\ndata to insrt");
scanf("%d",&data);
last=addatbegin(last,data);
break;
case 4:printf("\ndata to be insrt");
scanf("%d",data);
last=addatend(last,data);
break;
case 5:printf("data to be insrt\n");
scanf("%d",&data);
last=addtoempty(last,data);
break;


case 6:last=delatbegin(last);
break;
case 7:last=delatend(last);
break;
case 8:printf("data to be insrt\n");
scanf("%d",&data);
lastdelusingdata(last,data);
break;
default:printf("\n invalid option");
exit(0);
}
}
}


struct node *createlist(struct node *last)
{
int i,n,data;
last=NULL;
printf("\nenter number of nodes");
scanf("%d",&n);
if(n==0)
return last;

printf("to be insrt\n");
scanf("%d",&data);
last=addtoempty(last,data);
for(i=2;i<=n;i++)
{
printf("\nto be insrt");
scanf("%d",&data);
last=addatend(last,data);
}
return last;
}

struct node *addatbegin(struct node *last,int data)
{
struct node *tmp;
tmp=(struct node *)malloc(sizeof(struct node));
tmp->info=data;
tmp->link=last->link;
last->link=tmp;
return last;
}




struct node *addatend(struct node *last,int data)
{
struct node *tmp,p;
tmp=(struct node*)malloc(sizeof(struct node));
tmp->info=data;
tmp->link=last->link;
last->link=tmp;
last=tmp;
return last;
}





struct node *addtoempty(struct node *last,int data)
{
struct node *tmp;
tmp=(struct node *)malloc(sizeof(struct node));
tmp->info=data;
last=tmp;
last->link=last;
return last;
}



void display(struct node *last)
{
struct node *p;
if(last==NULL)
{
printf("\n list is empty");
return;
}
p=last->link;
do
{
printf("%5d",p->info);
p=p->link;
}
while(p!=last->link);
}




struct node *delatbegin(struct node *last)
{
struct node *tmp,*p;
if(last==NULL)
{
printf("\nlist is empty");
return last;
}
tmp=last->link;
last->link=tmp->link;
free(tmp);
return last;
}



struct node *delatend(struct node *last)
{
struct node *tmp,*p;
if(last==NULL)
{
printf("\nlist is empty");
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


struct node *delusingdata(struct node *last,int data)
{
struct node *tmp,*p;
if(last==NULL)
{
printf("list is empty\n");
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
if(p->link->info==data)
{
tmp=p->link;
p->link=tmp->link;
free(tmp);
return last;
}
p=p->link;
}
if(last->info==data)
{
tmp=last;
p->link=last->link;
last=p;
free(tmp);
}
return last;
}
