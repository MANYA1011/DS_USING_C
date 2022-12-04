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
void Insaft(struct node **q, int x){
    struct node *p,*r;
    p=getnode();
    p->info=x;
    p->next=(*q)->next;
    (*q)->next=p;
}

void Delbeg(struct node **start)
{
    struct node *p;int x;
    p=*start;
    *start=(*start)->next;
    x=p->info;
    free(p);
    printf("\nelement deleted is %d\n",x);
}

void enqueue(struct node **f,struct node **r,int x)
{
    if(*r==NULL)
    {
        Insbeg(&(*r),x);
        *f=*r;
    }
    else
    {
      Insaft(&(*r),x);
    (*r)=(*r)->next;
    }
}

void dequeue(struct node **f,struct node **r)
{

    if(*f==NULL)
    {
        printf("void deletion\n");
    }
    else
    {
       Delbeg(&(*f));
       if(*f==NULL)
       {
           *r=NULL;
       }

    }
}

void traverse(struct node *f)
{
    struct node *t;
    t=f;
    while(t!=NULL)
    {
        printf("%d ",t->info);
        t=t->next;
    }
}
int main()
{
    struct node *f,*r;
    f=NULL;
    r=NULL;
    enqueue(&f,&r,10);
    enqueue(&f,&r,20);
    enqueue(&f,&r,30);
    enqueue(&f,&r,40);
    enqueue(&f,&r,50);
    traverse(f);
    dequeue(&f,&r);
    traverse(f);
}
