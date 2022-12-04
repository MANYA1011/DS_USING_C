#include<stdio.h>
#include<stdlib.h>
#include"mylinkedlist.h"

struct node{
    int info;
    struct node *next;
};
void initialize(struct node **top)
{
    struct node *p;
    p=*top;
    p=NULL;
}
int push(struct node **top,int data)
{
    struct node *p;
    p=*top;
    Insbeg(&p,data);
}
void pop(struct node **top)
{
    struct node *p;
    p=*top;
    int x;
    if(p==NULL)
        printf("underflow\n");
    else
    {
      x=Delbeg(&p);
    }
    printf("%d\n",x);
}
void traverse(struct node **top)
{
while(*top!=NULL)
{
    printf("%d ",(*top)->info);
}
}
