#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *prev;
    struct node *next;
};

struct node *GetNode()
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    return p;
}

void Insbeg(struct node **dstart,int x)
{
    struct  node *p,*q;
    p=GetNode();
    q=*dstart;
    p->info=x;
    p->prev=NULL;
    p->next=q;
    if(q!=NULL)
    {
        q->prev=p;
    }
    *dstart=p;
    //Traverse(q);
}

void Insend(struct node **dstart,int x)
{
    struct node *p,*q;
    p=*dstart;
    q=GetNode();
    q->info=x;
    q->next=NULL;
    if(*dstart!=NULL)
    {
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=q;
        q->prev=p;
    }
    else{
        q->prev=NULL;
        p=q;
        *dstart=p;
    }
    //Traverse(*dstart);
}

void Insaft(struct node **p,int x)
{
    struct node *q,*r;
    q=GetNode();
    r=(*p)->next;
    q->info=x;
    q->prev=(*p);
    (*p)->next=q;
    q->next=r;
    if(r!=NULL)
    {
        r->prev=q;
    }
}

void Insbefore(struct node **r,int x)
{
    struct node *p,*q;
    q=GetNode();
    q->info=x;
    p=(*r)->prev;
    q->prev=p;
    p->next=q;
    q->next=*r;
    (*r)->prev=q;
    if((*r)->next==NULL && (*r)->prev==NULL)
    {
        q->next=*r;
        (*r)->prev=q;
        q->prev=NULL;
    }
}

void Traverse(struct node *dstart)
{
    struct node *p;
    p=dstart;
    while(p->next!=NULL)
    {
        printf("%d ",p->info);
        p=p->next;
    }
    printf("%d \n",p->info);
}

void Delbeg(struct node **dstart)
{
    struct node *p,*q;int x;
    p=*dstart;
    q=p->next;
    if(p==NULL)
        printf("void deletion\n");
    else
    {
        q->prev=NULL;
        x=p->info;
        printf("element deleted is %d \n",x);
        free(p);
        *dstart=q;
    }

}

void Delend(struct node **dstart)
{
    struct node *p,*q;int x;
    p=*dstart;

    if(p==NULL)
        printf("void deletion\n");
    else
    {
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->prev->next=NULL;
        x=p->info;
        printf("element deleted is %d \n",x);
    }
    free(p);
}

void Delaft(struct node **p)
{
    struct node *q,*r,*temp;int x;
    q=*p;
    r=q->next;
    q->next=r->next;
    r->next->prev=q;
    x=r->info;
    printf("element deleted is %d\n",x);
    free(q);
}

void Delbefore(struct node **p)
{
    struct node *temp,*q;int x;
    temp=*p;
    q=temp->prev;
    q->prev->next=temp;
    temp->prev=q->prev;
    x=q->info;
    printf("element deleted is %d\n",x);
    free(q);
}
int main()
{
    struct node *dstart1,*dstart2,*p;
    dstart1=NULL;dstart2=NULL;
    Insbeg(&dstart1,100);
    Insbeg(&dstart1,200);
    Insbeg(&dstart1,300);
    Insbeg(&dstart1,400);
    Insbeg(&dstart1,500);
    Insbeg(&dstart1,800);
    Insbeg(&dstart1,900);
    Insbeg(&dstart1,1000);
    Traverse(dstart1);
    /*Insend(&dstart2,600);
    Insend(&dstart2,700);
    p=dstart2;
    for(int i=1;i<2;i++)
    {
        p=p->next;
    }
    Insaft(&p,20);
    Traverse(dstart2);
    Insend(&dstart2,800);
    Insend(&dstart2,900);
    p=dstart2;
    for(int i=1;i<2;i++)
    {
        p=p->next;
    }
    Insbefore(&p,30);
    Traverse(dstart2);
    Insend(&dstart2,1000);
    Traverse(dstart2);*/
    p=dstart1;
    for(int i=1;i<5;i++)
    {
        p=p->next;
    }
    Delbefore(&p);
    Traverse(dstart1);
    Delbeg(&dstart1);
    Traverse(dstart1);
    Delend(&dstart1);
    Traverse(dstart1);

}
