#include<stdio.h>
#include<string.h>
#define N 20
int stack[N];
int top=-1;

void main()
{
    char st[N],*e,x;
    printf("enter an expression\n");
    gets(st);
    e=st;
    while(*e!='\0')
    {
        if(isalnum(*e))
        {
            printf("%c",*e);
        }
        else if(*e=='(')
        {
            push(*e);
        }
        else if(*e==')')
        {
            while((x=pop())!='(')
            {
                printf("%c",x);
            }
        }
        else
        {
            if(priority(stack[top])>=priority(*e))
                pop();
            push(*e);
        }
        e++;
    }
    while(top!=-1)
    {
        pop();
    }
}
void push(char x)
{
    top++;
    stack[top]=x;
}
void pop()
{
    if(top==-1)
        return -1;
    else
    printf("%c",stack[top--]);
}

void priority(char x)
{
    if(x=='(')
        return 0;
    else if(x=='+'||x=='-')
        return 1;
    else if(x=='*'||x=='/')
        return 2;
}
