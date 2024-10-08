/*
Description: This C program converts an infix expression to postfix notation using a stack data structure.
Author: [Jins Augustine]
Date: [12/09/2024]
License: [ MIT License]
Dependencies: None
Usage: Compile and run the program. Enter an infix expression when prompted, and the program will output the corresponding postfix expression.
*/






#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
char stack[100];
int top=-1;
void push(char x)
{
	if(top>=100-1)
		printf("\nStack overflow");
	else
		stack[++top]=x;
}

char pop()
{
	if(top==-1){
		printf("\nStack underflow");
		exit(0);
	}
	else
		return stack[top--];
}

int priority(char x)
{
	if(x=='(')
		return 0;
	if(x=='+' || x=='-')
		return 1;
	if(x=='/' || x=='*')
		return 2;
	if(x=='^')
		return 3;
	return 0;
}

	

void main()
{
	char exp[100],x;
	char *e;
	printf("Enter the expression\n");
	char s[100];
	scanf("%s",exp);
	e=exp;
	
	while(*e!='\0')
	{
		if(isalnum(*e))
		{
			printf("%c ",*e);
		}
		else if(*e=='(')
		{
			push(*e);
		}
		else if(*e==')')
		{
			while((x=pop())!='(')
			{
				printf("%c ",x);
			}
		}
		else
		{
			while(priority(stack[top])>=priority(*e))
				printf("%c ",pop());
			push(*e);
		}
		e++;
	}
	while(top!=-1)
	{
		printf("%c ",pop());
	}
}
				
		
	
	
	
