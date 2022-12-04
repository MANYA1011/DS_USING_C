#include<stdio.h>
#include<stdlib.h>
int DAT[50]={0};
int DAT1[50]={0};
struct node{
int info;
struct node *next;
};

struct node *getnode(){
    struct node *p;
    p= (struct node*) malloc(sizeof(struct node));
    return p;
}
void insbeg(struct node **start,int x)
{
    struct node *p;
    p=getnode();
    p->info=x;
    if(*start!=NULL)
    {
        p->next=(*start)->next;
        (*start)->next=p;
    }
    else
    {
      *start=p;
    (*start)->next=p;
    }
}

void insend(struct node **start,int x)
{
    struct node *p;
    p=getnode();
    p->info=x;
    if((*start)!=NULL)
    {
        p->next=(*start)->next;
        (*start)->next=p;
        *start=p;
    }
    else
    {
        *start=p;
        (*start)->next=p;
    }
}

void insaft(struct node **q,int x)
{
    struct node *p;
    p=getnode();
    p->info=x;
    if(*q!=NULL)
    {
        p->next=(*q)->next;
        (*q)->next=p;
    }
    else
    {
        printf("void insertion\n");
    }
}

void delbeg(struct node **start)
{
    struct node *p;int x;
    p=(*start)->next;
    (*start)->next=p->next;
    if((*start)->next==*start)
    {
        *start=NULL;
        x=p->info;
    }
    free(p);
}

void delend(struct node **start)
{
    struct node *p,*q;
    q=*start;
    p=(*start)->next;
    while((*start)->next!=*start)
    {
        p=p->next;
    }
    p->next=(*start)->next;
    *start=p;
    free(q);
}

void delaft(struct node **q)
{
    struct node *p;
    p=(*q)->next;
    (*q)->next=p->next;
    free(p);
}

void Traverse(struct node *start)
{
    struct node *p;
    p=start->next;
    while(p!=start)
    {
        printf("%d ",p->info);
        p=p->next;
    }
printf("%d\n",p->info);
}

void concat(struct node **start1,struct node **start2)
{
    struct node *p,*q,*r;
    p=*start1;
    q=*start2;

    while(p->next!=*start1)
    {
        p=p->next;
    }
    p->next=q;
    while(q->next!=*start2)
    {
        q=q->next;
    }
    q->next=*start1;
    Traverse(*start1);
}

void rev(struct node **start)
{
    struct node *p,*c,*n;
    p=NULL; c=*start; n=c->next;
    while(c->next!=*start)
    {
        c->next=p;
        p=c;
        c=n;
        if(n!=*start)
        {
            n=n->next;
        }
    }
    *start=p;
    printf("%d ",c->info);
    Traverse(*start);
}

void pattern(struct node **start)
{
    struct node *p;
    p=*start;int s=0;
    while(p->next!=*start)
    {
        s=s+p->info;
        p=p->next;
    }
    s=s+p->info;
    p=*start;
    while(p->next!=*start)
    {
        p->info=s-p->info;
        p=p->next;
    }
    p->info=s-p->info;
    Traverse(*start);
}


void Josephus(struct node **start)
{
    struct node *p,*q;
    int c=1;
    p=(*start);
    q=NULL;
    while(p->next!=*start)
    {
        while(c!=13)
        {
            q=p;
            c++;
            p=p->next;
        }
        p=p->next;
        delaft(&q);
        c=1;
        printf("deleted element is %d\n",p->info);
    }

}
