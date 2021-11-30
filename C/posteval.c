#include<stdio.h>
#include<stdlib.h>
void push(int);
int pop();
int stack[20];
int n;
int count=0;
void push(int x)
{
stack[count]=x;
count++;
}
int pop()
{
int x;
count--;
x=stack[count];
return x;
}
main()
{
int x1,x2,x3,k,i;
char postfix[20];
printf("enter the postfix expression\n");
scanf("%s",postfix);
i=0;
while(postfix[i]!='\0')
{
if(isdigit(postfix[i]))
{
push(postfix[i]-'0');
i++;
}
else
{
switch(postfix[i])
{
case '+' : x1=pop();
x2=pop();
x3=x2+x1;
push(x3);
break;
case '-' :x1=pop();
x2=pop();
x3=x2-x1;
push(x3);
break;
case '*' :x1=pop();
x2=pop();
x3=x2*x1;
push(x3);
break;
case '/' : x1=pop();
x2=pop();
x3=x2/x1;
push(x3);
break;
case '%' : x1=pop();
x2=pop();
x3=x2%x1;
push(x3);
break;
}
i++;
}
}
k=pop();
printf("the result is %d\n",k);
}
