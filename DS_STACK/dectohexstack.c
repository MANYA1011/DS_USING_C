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
    stack[top]=n%16;
    n=n/16;
}

while(top!=-1)
{
    if(stack[top]>=10 && stack[top]<=15){
        switch(stack[top])
        {
        case 10:
            printf("A ");
            break;
        case 11:
            printf("B ");
            break;
        case 12:
            printf("C ");
            break;
        case 13:
            printf("D ");
            break;
        case 14:
            printf("E ");
            break;
        case 15:
            printf("F ");
            break;
        }
    }
    else
    printf("%d ",stack[top]);
    top--;
}
}

