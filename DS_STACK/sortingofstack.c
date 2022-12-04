#include<stdio.h>
#define N 5
int stack[N];
int top=-1;

void main()
{
    int i,j,x,a,temp;
    for(i=0;i<N;i++)
    {
        printf("enter an element in stack\n");
        scanf("%d",&x);
        push(x);
    }
  display();
    for(i=top;i>0;i--)
    {
        for(j=i;j>0;j--)
        {
            if(stack[j]>stack[j+1])
            {
                temp=stack[j+1];
                stack[j+1]=stack[j];
                stack[j]=temp;
            }
        }
    }
    for(i=0;i<N;i++)
        printf("%d ",stack[i]);
}

void push(int x){
if(top==N-1)
    printf("overflow\n");
else
    stack[top++]=x;
}
void display()
{
    printf("%d ",stack[top--]);
}
