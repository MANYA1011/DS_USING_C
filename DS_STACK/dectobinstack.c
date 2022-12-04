#include<stdio.h>
#define N 100
int stack[N];
int top=-1;

void main()
{
int n;
printf("enter a decimal number\n");
scanf("%d",&n);

while(n!=0)
{
    top++;
    stack[top]=n%2;
    n=n/2;
}

while(top!=-1)
{
    printf("%d ",stack[top]);
    top--;
}
}
