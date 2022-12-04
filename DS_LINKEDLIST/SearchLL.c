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
Traverse(start1);printf("\n");
Copy(&start1);
printf("\n");
orderedinsertion(&start2,600);
orderedinsertion(&start2,400);
orderedinsertion(&start2,300);
orderedinsertion(&start2,200);
orderedinsertion(&start2,100);
orderedinsertion(&start2,90);
Traverse(start2);
printf("\n");
Copy(&start2);
printf("\n");
Search(&start1,100);

}
