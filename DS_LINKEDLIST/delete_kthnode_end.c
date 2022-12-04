#include<stdio.h>
//#include"mylinkedlist.h"
#include"stack.h"
int main(){
    struct node *start1,*start2,*p;
    start1= NULL;start2=NULL;

/*orderedinsertion(&start1,500);
orderedinsertion(&start1,300);
orderedinsertion(&start1,200);
orderedinsertion(&start1,100);
orderedinsertion(&start1,90);
orderedinsertion(&start1,80);
Traverse(start1);printf("\n");
orderedinsertion(&start2,600);
orderedinsertion(&start2,400);
orderedinsertion(&start2,100);
Traverse(start2);
printf("\n");
deleteknode(&start1,4);*/
initialize(&p);
    push(&p,100);
    push(&p,200);
    push(&p,300);
    push(&p,400);
    push(&p,500);
    push(&p,500);
    traverse(p);
}
