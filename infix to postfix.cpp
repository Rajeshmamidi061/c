#include<stdio.h>
#include<stdlib.h>
void push(char);
char pop();
char peek();
int prec(char);
void infixtpostfix(char*);
char stack[10];
int top=-1;
void push(char c)
{
	top++;
	stack[top]=c;
}
char pop()
{
	char c=stack[top];
	top--;
	return c;
}
char peek()
{
	return stack[top];
}
int prec(char c)
{
	switch(c)
	{
		case '+':
		case '-':return -1;
		case '*':
		case '/': 
		case '%':return 2;
		case '^':return 3;
		default:return 0;
	}
}
void infixtopostfix(char *e)
{
	int i,j=0,a=0,ch=0;
	char postfix[100];
	for(i=0;e[i]!='\0';i++)
	{
		if(isalnum(e[i]))
		a++;
		else if(e[i]=='+'||e[i]=='-'||e[i]=='*'||e[i]=='/'||e[i]=='%'||e[i]=='^')
		ch++;
	}
	if(a<=ch)
	{
		printf("Invaild expression");
		exit(0);
	}
	for(i=0;e[i]!='\0':i++)
	{
		if(isalnum(e[i])||e[i]=='('||e[i]==')'||e[i]=='+'||e[i]=='-'||e[i]=='*'||e[i]=='/'||e[i]=='%'||e[i]=='^')
		{
		if(isalnum(e[i])
		{
			postfix[j]=e[i];
			j++;
			}	
		else if(e[i]=='(')
		push(e[i]);
		else if(e[i]==')')
		{
			while(top!=-1 && peek()!='(')
			{
				postfix[j]=pop();
				j++;
			}
			pop();
		}
		else
		{
			while(top!=-1&&prec(e[i])<=prec(peek()))
			{
				postfix[j]=pop;
				j++;
			}
		}
		
		}
		else
		{
			printf("invalid expression");
			exit(0);
		}
	}
	while(top!=-1)
	{
		if(peek=='(')
		{
			printf("invaild expression");
			exit(0);
		}
		postfix[j]=pop();
		j++;
	}
	postfix[j]='\0';
printf("postfix expression is %s",postfix);
}










int main()
{
	char exp[100];
	printf("Enter vaild expression");
	gets(exp);
	infix to postfix(exp);
	return 0;
}
