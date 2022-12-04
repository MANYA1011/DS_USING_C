#include<stdio.h>
#define N 100
int stack[N];
int top=-1;

void main(){
    int num,base;
printf("enter a number in decimal and the base to be converted in\n");
scanf("%d %d",&num,&base);
while(num!=0)
{
    top++;
    stack[top]=num%base;
    num=num/base;
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
