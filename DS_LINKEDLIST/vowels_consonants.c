#include<stdio.h>
#include"mylinkedlist.h"

int main(){
    struct node *start1,*start2;
    struct node *p,*q;
    start1= NULL;start2=NULL;

Insbeg(&start1,'a');
Insbeg(&start1,'c');
Insbeg(&start1,'e');
Insbeg(&start1,'w');
Insbeg(&start1,'i');
Insbeg(&start1,'x');
Insbeg(&start1,'s');
Insbeg(&start1,'o');
Insbeg(&start1,'u');
Traverse(start1);printf("\n");
/*orderedinsertion(&start2,600);
orderedinsertion(&start2,400);
orderedinsertion(&start2,100);
Traverse(start2);*/
consonants(&start1);
}
