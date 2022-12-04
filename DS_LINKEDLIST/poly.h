#include<stdio.h>
#include<stdlib.h>
struct node{
    int coef;
    int exp;
    struct node *next;
};


struct node *getnode(){
    struct node *p;
    p= (struct node*) malloc(sizeof(struct node));
    return p;
}

void Insbeg(struct node **start,int x,int y){
    struct node *p;
    p=getnode();
    p->coef=x;
    p->exp=y;
    p->next= *start;
    *start=p;

}

void Traverse(struct node *start){
    struct node *p;
    p=start;
    while(p!=NULL){
        printf("%d-%d ", p->coef,p->exp);
        p=p->next;
    }
}

void Insend(struct node **start,int x,int y){
    struct node *q,*p;
    q=*start;
    if((*start)==NULL)
    {
        Insbeg(&(*start),x,y);
    }
    else{

    while(q->next!=NULL){
        q=q->next;

    }
    p=getnode();
    p->coef=x;
    p->exp=y;
    p->next=NULL;
    q->next=p;
    }
}
void Insaft(struct node *q, int x,int y){
    struct node *p,*r;
    p=getnode();
    p->coef=x;
    p->exp=y;
    r=q->next;  //p->next=q->next;
    p->next=r;     //q->next=p;
    q->next=p;
}

void orderedinsertion(struct node **st,int data,int y)
{
    struct node *p,*q;
    p=(*st);
    q=NULL;
    while(p!=NULL && y<=p->exp){
        q=p;
        p=p->next;
    }
    if(q==NULL){
        Insbeg(&(*st),data,y);
    }
    else
    {
        Insaft(&q,data,y);
    }
   //Traverse(&(*st));
}
int Delbeg(struct node **start)
{
    struct node *p;int x;
    p=*start;
    (*start)=(*start)->next;
    x=p->coef;
    free(p);
    return x;
}

void Delaft(struct node **p)
{
    struct node *q,*r;int x;
    q=(*p)->next;
    r=q->next;
    (*p)->next=r;
    x=q->coef;
    free(q);
    //return x;
}
void delatpos(struct node **p)
{
    struct node *q,*r;
    q=*p;
    r=q->next;
}
int Delend(struct node **start)
{
    struct node *p,*q;int x;
    p=*start;
    q=NULL;
    while(p->next!=NULL)
    {
        q=p;
        p=p->next;
    }
    q->next=NULL;
    x=p->coef;
    free(p);
    return x;
}
void addition(struct node **poly1,struct node **poly2)
{
    struct node *poly3,*p,*q;
    poly3=NULL;
    p=*poly1;q=*poly2;
    while(p!=NULL && q!=NULL)
    {
        if(p->exp==q->exp)
        {
            Insend(&poly3,p->coef+q->coef,p->exp);
            p=p->next;
            q=q->next;
        }
        else{
            if(p->exp>q->exp)
        {
            Insend(&poly3,p->coef,p->exp);
            p=p->next;
        }
        else
        {
          Insend(&poly3,q->coef,q->exp);
        q=q->next;
        }
    }
    }
    while(p!=NULL)
    {
       Insend(&poly3,p->coef,p->exp);
        p=p->next;
    }
    while(q!=NULL)
    {
        Insend(&poly3,p->coef,p->exp);
        q=q->next;
    }
    Traverse(poly3);
}

void subtraction(struct node **poly1,struct node **poly2)
{
    struct node *q;
    q=*poly2;
    while(q!=NULL)
    {
        q->coef=-(q->coef);
        q=q->next;
    }
    addition(poly1,poly2);
}

void multiplication(struct node **poly1,struct node **poly2)
{
    struct node *p,*q,*poly3,*s,*r;
    int x;
    q=*poly2;
    poly3=NULL;
    p=*poly1;
    while(q!=NULL)
    {
        while(p!=NULL)
        {
            Insend(&poly3,p->coef*q->coef,p->exp+q->exp);
            p=p->next;
        }
        q=q->next;
        p=*poly1;
    }
    p=poly3;
    while(p->next!=NULL)
    {
        q=p->next;r=p;
        while(q!=NULL && r->next!=NULL){
        if(p->exp==q->exp)
        {
            p->coef=p->coef+q->coef;
            Delaft(&r);
        }
        q=q->next;
        r=r->next;
        }

         p=p->next;

}
   Traverse(poly3);
}
void rev(struct node **start)
{
    struct node *c,*p,*n;
    c=*start;
    p=NULL;
    n=c->next;
    while(c!=NULL)
    {
        c->next=p;
        p=c;
        c=n;
        if(n!=NULL)
        {
            n=n->next;
        }
    }
    *start=p;
    Traverse(*start);
}
