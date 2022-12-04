#include<stdio.h>
#include<math.h>
#define N 50
int stack[N];
int top=-1;

void main(){
char st[20];int i,c=0;
printf("enter an expression\n");
//gets(st);
scanf("%[^\n]s",st);
for(i=0;st[i]!='\0';i++)
{
    c++;
}
for(i=c-1;i>=0;i--)
{
    if(st[i]!=' ')
    {
        switch(st[i])
        {
        case '+':
            sum();
            break;
        case '-':
            diff();
            break;
        case '/':
            div();
            break;
        case '%':
            mod();
            break;
        case '^':
            power();
            break;
        case '*':
            mul();
            break;
        default:
            top++;
            stack[top]=st[i]-48;
        }
    }
}
printf("The result is %d\n",stack[top]);
}

void sum()
{
    int res,op1,op2;
    op1=stack[top];
    top--;
    op2=stack[top];
    top--;
    res=op1+op2;
    top++;
    stack[top]=res;
}

void diff()
{
    int res,op1,op2;
    op1=stack[top];
    top--;
    op2=stack[top];
    top--;
    res=op1-op2
    ;
    top++;
    stack[top]=res;
}

void div()
{
    int res,op1,op2;
    op1=stack[top];
    top--;
    op2=stack[top];
    top--;
    res=op1/op2;
    top++;
    stack[top]=res;
}

void mul()
{
    int res,op1,op2;
    op1=stack[top];
    top--;
    op2=stack[top];
    top--;
    res=op2*op1;
    top++;
    stack[top]=res;
}

void mod()
{
    int res,op1,op2;
    op1=stack[top];
    top--;
    op2=stack[top];
    top--;
    res=op1%op2;
    top++;
    stack[top]=res;
}

void power()
{
    int res=1,op1,op2,i;
    op1=stack[top];
    top--;
    op2=stack[top];
    top--;
   for(i=0;i<op1;i++)
   {
       res=res*op2;
   }
    top++;
    stack[top]=res;
}
