#include<stdio.h>
#define N 100
int stack[N];
int top=-1;

void main()
{
    char s[N];int i=0;
    printf("enter an expression\n");
    gets(s);

    while(s[i]!='\0')
    {

        if(s[i]=='(')
        {
           push(s[i]);
        }
        else if(s[i]==')')
        {
           pop();
        }
        i++;
    }
    if(top==-1)
    {
        printf("valid expression\n");
    }
    else
    {
        printf("invalid expression\n");
    }
}

void push(char x)
{
    top++;
    stack[top]=x;
}
void pop()
{
    if(top==-1){
        printf("invalid expression\n");
        exit(0);
    }
    else{
        top--;
    }
}
