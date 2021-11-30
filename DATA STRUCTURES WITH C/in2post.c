/*program for conversion of infix to postfix*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#define b' '
#define t'\t'
#define max 50
long int stack[max];
void push(long int symbol);
long int pop();
int priority(char symbol);
void infix_postfix();
char infix[max],postfix[max];
int top=-1;
void main()
{
printf("Enter infix expression\n");
gets(infix);
puts(infix);
printf("\n");
infix_postfix();
puts(postfix);
printf("\n");
}


void infix_postfix()
{
char next,symbol;
int i,p=0;
for(i=0;i<strlen(infix);i++)
{
symbol=infix[i];
if((symbol==b)||(symbol==t))
return;
else
{
switch(symbol)
{
case '+':
case '-':
case '*':
case '/':
case '^':while((!top==-1)&&priority(stack[top])>=priority(symbol))
postfix[p++]=pop();
push(symbol);
break;
case ')' :while((next==pop())!='(')
postfix[p++]=next;
break;
default:postfix[p++]=symbol;
}
}
}
while(!(top==-1))
postfix[p++]=pop();
postfix[p++]='\0';
}

int priority(char symbol)
{
switch(symbol)
{
case '+':
case '-':return 1;
case '*':
case '/':return 2;
case '^':return 3;
default :return 0;
}
}

void push(long int symbol)
{
if(top==max-1)
{
printf("stack overflow\n");
exit(0);
}
top=top+1;
stack[top]=symbol;
}


long int pop()
int i;
if(top==-1)
{
printf("stack underflow\n");
exit(0);
}

