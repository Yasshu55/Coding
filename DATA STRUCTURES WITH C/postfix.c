//postfix evaluation program
#include<stdio.h>
#include<math.h>
#include<string.h>
#define max 50
void push(long int symbol);
long int pop();
long int eval();
char infix[max],postfix[max];
long int stack[max]
int top=-1;
void main()
{
long int value;
top=-1;
printf("Enter infix expression\n");
gets(infix);
puts(infix);
infix_to_postfix();
printf("result=%d",eval);
value=eval();
printf("\n value of expression :%ld",value);
}
long int eval()
{
int i,a,b,t,result;
for(i=0;i<strlen(postfix);i++)
{
if(postfix[i]<='9'&&postfix[i]>='0')
push(postfix[i]-'0');
else
{
a=pop();
b=pop();
switch(postfix[i])
{
case '+':t=b+a;
break;
case '-':t=b-a;
break;
case '/':t=b/a;
break;
case '*':t=b*a;
break;
case '^':t=pow(b,a);
}
push(t)
}
}
result=pop();
return result;
}



