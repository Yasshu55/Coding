include<stdio.h>
struct node
{int info;
  struct node *link;
};
struct node *createlist(struct node *start);
struct node *addatbegin(struct node *start,int data);
struct node *addatend(struct node *start,int data);
struct node *addatpos(struct node *start,int data,int pos);
struct node *deleteatbegin(struct node *start);
struct node *deleteatend(struct node *start);
struct node *deleteusingdata(struct node *start,int data);
void display(struct node *start);
void main()
 { struct node *start=NULL;
 int ch,x,i;
 printf("\nLinked List Implementatio\n ");
 while(1)
{
 printf("\nOperation that can be performed on the list\n") ;
printf("\n1-Create a list\n2-Display the list\n3-Add data atbegin\n4-Add data at end\n5-Add data at other position\n6-Deletion atbegin\n7-Deletion at end\n8-Deletion Using data\n");
  scanf("%d",&ch);
 switch(ch)
 { case 1:
                 start=createlist(start);
                 break;
    case 2:
                 display(start);
                 break;
    case 3:
               { printf("Enter data to add at begin");
                  scanf("%d",&x);
                  start=addatbegin(start,x);
                 break;
                }
   case 4:
              { printf("Enter data to add at end");
                 scanf("%d",&x);
                 start=addatend(start,x);
                 break;
              }
  case 5:
              {printf("Enter the data to be inserted");
                scanf("%d",&x);
                printf("Enter the position of data to be inserted");
                scanf("%d",&i);
                start=addatpos(start,x,i);
               break;
              }
 case 6:
              {start=deleteatbegin(start);
               break;
               }
 case 7:
              {start=deleteatend(start);
               break;
               }
case 8:
        { printf("Enter the data to be deleted:");
           scanf("%d",&x);
           start=deleteusingdata(start,x);
           break;
          }
default :
              printf("Invalid option");
             exit(0);
             break;
}//end of switch
}//end of while
}//end of main
struct node *createlist(struct node *start)
 { int n,i,data;
    start=NULL;
  printf("\n Enter no of nodes\n");
  scanf("%d",&n);
   if(n==0)
    return start;
   printf("\nEnter data");
   scanf("%d",&data);
   start=addatbegin(start,data);
   for(i=2;i<=n;i++)
  {printf("Enter the data");
   scanf("%d",&data);
   start=addatend(start,data);
  }
 return start;
 }
struct node *addatbegin(struct node *start,int data)
{struct node *tmp;
  tmp=(struct node *)malloc(sizeof(struct node));
  tmp->info=data;
  tmp->link=start;
  start=tmp;
 }
struct node *addatend(struct node *start,int data)
 { struct node *p,*tmp;
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
{struct node *p,*tmp;int i;
  tmp=(struct node *)malloc(sizeof(struct node));
  tmp->info=data;

 if(pos==1)
 {tmp->link=start;
   start=tmp;
 return start;
 }
else
{p=start;
       for(i=1;i<pos-1&&p!=NULL;i++)
        p=p->link;
    if(p==NULL)
     printf("\nThere are less than &d elements in the list\n",pos);

    tmp->link=p->link;
  p->link=tmp;
     return start;
  }
}
void display(struct node *start)
  {struct node *p;
            if(start==NULL)
                    printf("\nList is Empty!\n");
               else
                   {p=start;
                      while(p!=NULL)
                        {printf("%d\t",p->info);
                          p=p->link;
                         }
                    }
   }
struct node *deleteatbegin(struct node *start)
     { struct node *tmp;
             if(start==NULL)
                   {printf("\nList is Empty\n");
                      return start;
                    }
             else
                  {tmp=start;
                    start=start->link;
                    return start;
                   }
      }
struct node *deleteatend(struct node *start)
 {struct node *tmp,*p;
   if(start==NULL)
      {printf("\nList is Empty\n");
       return start;
      }
    else
      {p=start;
            while(p->link->link!=NULL)
                  p=p->link;
               tmp=p->link;
                 p->link=NULL;
             free(tmp);
return start;
       }
}
struct node *deleteusingdata(struct node *start,int data)
{struct node *tmp,*p;
    if(start==NULL);
      {printf("\nList is Empty\n");
       return start;
      }
  if(start->info==data)
 {tmp=start;
      start=start->link;
        free(tmp);
       return start;
 }
p=start;
while(p->link!=NULL)
{if(p->link->info==data)
    {tmp=p->link;
      p->link=tmp->link;
      free(tmp);
     return start;
   }
   p=p->link;
 }
  printf("\n data not found\n");
 return start;
}
