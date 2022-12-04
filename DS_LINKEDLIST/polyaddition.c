#include<stdio.h>
#include"poly.h"

int main()
{
    struct node *start1,*start2;
    struct node *p,*q;
    start1= NULL;start2=NULL;
    orderedinsertion(&start1,5,1);
orderedinsertion(&start1,3,3);
orderedinsertion(&start1,2,5);
orderedinsertion(&start1,4,4);
orderedinsertion(&start1,2,2);
orderedinsertion(&start1,5,6);
Traverse(start1);
printf("\n");
orderedinsertion(&start2,6,1);
orderedinsertion(&start2,4,4);
orderedinsertion(&start2,1,5);
Traverse(start2);
printf("\n");
addition(&start1,&start2);
printf("\n");
multiplication(&start1,&start2);
printf("\n");
rev(&start1);
printf("\n");
rev(&start2);
printf("\n");
subtraction(&start1,&start2);
}
