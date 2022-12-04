#include<stdio.h>
#include"mylinkedlist.h"
int main(){
    struct node *start1,*start2;
    struct node *p,*q;
    start1= NULL;start2=NULL;

orderedinsertion(&start1,500);
orderedinsertion(&start1,300);
orderedinsertion(&start1,200);
orderedinsertion(&start1,100);
orderedinsertion(&start1,90);
orderedinsertion(&start1,80);
orderedinsertion(&start1,70);
orderedinsertion(&start1,60);
p=start1;
    for(int i=0; i<2; i++){
        p=p->next;
    }
    Insaft(&p, 20);
    printf("\n");
    Traverse(start1);
    Delbeg(&start1);
    printf("\n");
    Traverse(start1);
    printf("\n");
    Delend(&start1);
    Traverse(start1);
    Delaft(&p);
    printf("\n");
    Traverse(start1);
    printf("\n");
    Sort(start1);
    printf("\n");
    Traverse(start1);
    printf("\n");
    PQinsert(&start1,30);
    Traverse(start1);
    printf("\n");
    PQdelete(&start1);
    Traverse(start1);
}

