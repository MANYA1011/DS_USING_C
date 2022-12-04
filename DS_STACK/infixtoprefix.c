#include<string.h>
#define N 20
int stack[N];
int top=-1;

void main()
{
    char st[N],st1[N],*e,x;int c=0,k=0,arr[N],ch;int i;
    printf("enter an expression\n");
    gets(st);
    for(i=0;st[i]!='\0';i++)
    {
        c++;
    }
    for(i=c-1;i>=0;i--)
    {
        st1[k]=st[i];
        k++;
    }
    st1[k+1]='\0';
    e=st1;
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
i=N;
     pop1(i);
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
void pop1(int i)
{


    while(i!=-1)
    printf("%c",stack[i--]);
}
