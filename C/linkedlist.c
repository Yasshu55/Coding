#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* next;
};
struct node* create(struct node* head)
{
struct node *ptr, *newnode;
int i,n,el;
printf("enter no of elements");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("enter elements");
scanf("%d",&el);
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=el;
newnode->next=NULL;
if(head==NULL)
{
head=newnode;
ptr=head;
}
else
{
ptr->next=newnode;
ptr=ptr->next;
}
}
return head;
}
void display(struct node *head)
{
struct node *ptr=head;
if(head==NULL)
printf("List is empty");
else
{
while(ptr!=NULL)
{
printf("%d\t", ptr->data);
ptr=ptr->next;
}
}
}
struct node* insert_begin(struct node* head)
{
struct node* newnode;
int el;
printf("enter element to insert");
scanf("%d",&el);
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=el;
newnode->next=head;
head=newnode;
return head;
}
struct node* insert_end(struct node* head)
{
struct node* newnode,*ptr=head; 
int el;
printf("enter element to insert");
scanf("%d",&el);
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=el;
newnode->next=NULL;
if(head==NULL)
head=newnode;
else
while(ptr->next!=NULL)
ptr=ptr->next;
ptr->next=newnode;
return head;
}
struct node* insert_after(struct node* head)
{
struct node* ptr=head,*newnode;
int el,n;
printf("enter the node after which the element to insert");
scanf("%d",&n);
printf("enter element to insert");
scanf("%d",&el);
newnode=(struct node*)malloc(sizeof(struct node)); newnode->data=el;
while(ptr!=NULL)
{
if(ptr->data==n)
{
newnode->next=ptr->next;
ptr->next=newnode;
break;
}
ptr=ptr->next;
}
if(ptr==NULL)
printf("entered node value not found in the list");
return head;
}
struct node* insert_pos(struct node* head)
{
struct node *ptr=head,*newnode;
int el,pos,count=1;
printf("enter elemet and poistion to inserst");
scanf("%d%d",&el,&pos);
newnode=(struct node*) malloc(sizeof(struct node));
newnode->data=el;
if(pos==1)
{
newnode->next=head;
head=newnode;
}
else
{
while(ptr!=NULL && count<=pos-2)
{
ptr=ptr->next;
count++;
}
if(ptr==NULL)
printf("there are less than %d elements", pos-1);
else
{
newnode->next=ptr->next;
ptr->next=newnode;
}
}
return head;
}
struct node* delete_first(struct node* head)
{
struct node *ptr=head;
if(head==NULL)
printf("List is empty");
else
{
head=head->next;
free(ptr);
}
return head;
}
struct node* delete_last(struct node* head)
{
struct node *ptr=head,*prev;
if(head==NULL)
printf("List is empty");
else if(head->next==NULL)
{
free(head);
head=NULL;
}
else
{
do
{
prev=ptr;
ptr=ptr->next;
}while(ptr->next!=NULL);
prev->next=NULL;
free(ptr);
}
return head;
}
struct node* delete_value(struct node* head)
{
struct node* cur=head, *prev;
int el;
printf("enter node value to delete");
scanf("%d",&el);
if(head!=NULL && head->data==el)
{
head=head->next;
free(cur);
}
else
{
while(cur!=NULL)
{
prev=cur;
cur=cur->next;
if(cur!=NULL && cur->data==el)
{
prev->next=cur->next;
free(cur);
break;
}
}
}
if(cur==NULL)
printf("entered node value is not in the list");
return head;
}
main()
{
int option;
struct node* head=NULL;
while(1)
{
printf("\n1.CREATE");
printf("\n2.INSERT_BEGIN");
printf("\n3.INSERT_END");
printf("\n4.INSERT_AFTER");
printf("\n5.INSERT_POSITION");
printf("\n6.DELETE FIRST");
printf("\n7.DELETE LAST");
printf("\n8.DELETE BY VALUE");
printf("\n9.DISPLAY");
printf("\n10.EXIT");
printf("\nenter your option");
scanf("%d",&option);
switch(option)
{
case 1: head=create(head);
display(head);
break;
case 2: head=insert_begin(head);
display(head);
break;
case 3: head=insert_end(head);
display(head);
break;
case 4: head=insert_after(head);
display(head);
break;
case 5: head=insert_pos(head);
display(head);
break;
case 6: head=delete_first(head);
display(head);
break;
case 7: head=delete_last(head);
display(head);
break;
case 8: head=delete_value(head);
display(head);
break;
case 9: display(head);
break;
case 10: exit(1);
default: printf("enter correct option");
}
}
}
