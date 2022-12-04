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


