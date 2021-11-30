
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define max 50
#define b ' '
#define t '\t'
void push(long int symbol);
long int pop();
void infix_postfix();
int priority(char symbol);
char infix[max],postfix[max];
long int stack[max];
int top=-1;
void main()
{
int top=-1;
printf("\n enter infix expression");
scanf("%s",infix);
printf("%s\n",infix);
infix_postfix(infix);
printf("%s\n",postfix);
}
void infix_postfix()
{
unsigned int p=0,i;
char next,symbol;
for(i=0;i<strlen(infix);i++)
{
symbol=infix[i];
if(symbol==b||symbol==t)
return 1;
else
{
switch(symbol)
{
case '(': push(symbol);
break;
case ')': while((next=pop())!='(')
postfix[p++]=next;
break;
case '^':
case '+':
case '-':
case '*':
case '/':
while(!(top==-1)&&(priority(stack[top]>=priority(symbol))))
postfix[p++]=next;
push(symbol);
break;
default : postfix[p++]=symbol;
}
}
}
while(top!=-1)
postfix[p++]=pop();
postfix[p]='\0';
}
int priority(char symbol)
{
switch(symbol)
{
case '^': return 3;
case '*':
case '/': return 2;
case '+':
case '-': return 1;
default : return 0;
}
}
void push(long int symbol)
{
if(top==max-1)
{
printf("\n stack is overflow");
exit(0);
}
top++;
stack[top]=symbol;
}
long int pop()
{
int i;
if(top==-1)
{
printf("\n stack is underflow");
exit(0);
}
i=stack[top];
top--;
return i;
} 
