#include<stdio.h>
#include<stdlib.h>

struct node{
   int info;
   struct node *next;
};

struct node *getnode(){
    struct node *p;
    p= (struct node*) malloc(sizeof(struct node));
    return p;
}

void Insbeg(struct node **start,int x){
    struct node *p;
    p=getnode();
    p->info=x;
    p->next=*start;
    *start=p;
}
void Delbeg(struct node **start)
{
    struct node *p;int x;
    p=*start;
    *start=(*start)->next;
    x=p->info;
    free(p);
   printf("\nelement popped is %d\n",x);
}

void initialize(struct node **top)
{
    struct node *p;
    p=*top;
    p=NULL;
}
int push(struct node **top,int data)
{
     Insbeg(&(*top),data);
}
void pop(struct node **top)
{
    Delbeg(&(*top));
}
void peek(struct node *top)
{
    printf("\n%d",top->info);
}
void traverse(struct node *top)
{
while(top!=NULL)
{
    printf("%d ",(top)->info);
    top=(top)->next;
}
}
int main(){
    struct node *p;
   // initialize(&p);
   p=NULL;
    push(&p,100);
    push(&p,200);
    push(&p,300);
    push(&p,400);
    push(&p,500);
    push(&p,600);
    traverse(p);
    pop(&p);
    traverse(p);
    peek(p);
}
