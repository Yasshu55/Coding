#include<stdio.h>
#include<stdlib.h>
void push(char);
char pop();
char postfix[20];
char infix[20];
int top=-1;
int priority(char);
char stack[100],n;
void main()
{
int i,j;
char t;
printf("enter the prefix expression\n");
scanf("%s",infix);
i=0;
j=0;
while(infix[i]!='\0')
{
if(isalnum(infix[i]))
{
postfix[j]=infix[i];
j++;
}
else
{
if(infix[i]=='('||top==-1||stack[top]=='(')
{
push(infix[i]);
}
else if(infix[i]==')')
{
while(stack[top]!='(')
{
postfix[j]=pop();
j++;
}
t=pop();
}
else
{
if(priority(stack[top])<priority(infix[i]))
{
push(infix[i]);
}
else
{
while((priority(stack[top]))>=(priority(infix[i])))
{
postfix[j]=pop();
j++;
}
}
}
}
i++;

}
while(top!=-1)
{
postfix[j]=pop();
j++;
}
printf("postfix expression is %s\n",postfix);
}
void push(char ch)
{
top++;
stack[top]=ch;
}
char pop()
{
char x;
x=stack[top];
top--;
return x;
}
int priority(char op)
{
switch(op)
{
case '+':
case '-': return 1;
case '/':
case '*':
case '%': return 2;
}
}

