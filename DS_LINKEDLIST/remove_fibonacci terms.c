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
void delaft(struct node **q)
{
    struct node *p;
    p=(*q)->next;
    (*q)->next=(p)->next;
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
    printf("%d \n",p->info);
}
void fibonacci(struct node **start)
{
    struct node *p,*q,*r;int i,max=0,dat[20],a=0,b=1,c;
    p=(*start)->next;
    q=*start;r=*start;
    while(q->next!=*start)
    {
        if(q->info>max)
        {
            max=q->info;
        }
        q=q->next;
    }
    for(i=0;i<max+1;i++)
    {
        dat[i]=0;
    }
    dat[a]=1;
    dat[b]=1;
    c=a+b;
  while(c<=max)
  {
        dat[c]=1;
        a=b;
        b=c;
        c=a+b;
   }
 /*for(i=0;i<=max;i++)
    {
       printf("%d,",dat[i]);
    }*/
    while(p!=*start)
    {
        if(dat[p->info]==1)
        {
            p=p->next;
            delaft(&r);
        }
        else
        {
            r=p;
            p=p->next;
        }
    }
    if(dat[p->info]==1)
    {
        delaft(&r);
        *start=r;
    }
Traverse(*start);
}

int main()
{
    struct node *start;
    start=NULL;
    insbeg(&start,0);
    insbeg(&start,2);
    insbeg(&start,4);
    insbeg(&start,5);
    insbeg(&start,8);
    insbeg(&start,21);
    insbeg(&start,7);
    Traverse(start);
    fibonacci(&start);

}
