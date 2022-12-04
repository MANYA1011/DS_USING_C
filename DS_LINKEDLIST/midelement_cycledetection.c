#include<stdio.h>
#include"mylinkedlist.h"

int main(){
    struct node *start1,*start2;
    struct node *p,*q;
    start1=NULL;start2=NULL;

orderedinsertion(&start1,500);
orderedinsertion(&start1,300);
orderedinsertion(&start1,200);
orderedinsertion(&start1,100);
orderedinsertion(&start1,90);
orderedinsertion(&start1,80);
orderedinsertion(&start1,70);
orderedinsertion(&start1,60);

Traverse(start1);printf("\n");
orderedinsertion(&start2,600);
orderedinsertion(&start2,400);
orderedinsertion(&start2,100);
MiddleElement(&start1);
    p=start1;
    while(p->next!=NULL)
    {
    p=p->next;
    }
    printf("\n%d",p->info);
    q=start1;
    while(q->info!=100)
    {
    q=q->next;
    }
    printf("\n%d",q->info);
    p->next=q;
    CycleDetection(&start1);
}
