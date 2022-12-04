#include<stdio.h>
#include"mylinkedlist.h"

int main(){
    struct node *start1,*start2;
    struct node *p,*q;
    start1= NULL;start2=NULL;

orderedinsertion(&start1,500);
orderedinsertion(&start1,300);
orderedinsertion(&start1,200);
Traverse(start1);printf("\n");
orderedinsertion(&start2,600);
orderedinsertion(&start2,400);
orderedinsertion(&start2,100);
Traverse(start2);
Merge(&start1,&start2);
}


    /*MiddleElement(&start);
    p=start;
    while(p->next!=NULL)
    {
    p=p->next;
    }
    printf("\n%d",p->info);
    q=start;
    while(q->info!=401)
    {
    q=q->next;
    }
    printf("\n%d",q->info);
    p->next=q;
    CycleDetection(&start);

}

*/


    /*p=start;
    for(int i=0; i<2; i++){
        p=p->next;
    }
    Insaft(&p, 40);
    printf("\n");
    Traverse(start);
    /*Delbeg(&start);
    printf("\n");
    Traverse(start);
    printf("\n");
    Delend(&start);
    Traverse(start);
    Delaft(&p);
    printf("\n");
    Traverse(start);*/
    /*printf("\n");
    Sort(start);
    printf("\n");
    Traverse(start);
    printf("\n");
    PQinsert(&start,90);
    Traverse(start);
    printf("\n");
    PQdelete(&start);
    Traverse(start);*/

