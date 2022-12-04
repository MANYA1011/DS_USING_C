#include<stdio.h>
#include"mylinkedlist.h"

int main()
{
    struct node *start1,*start2;
    struct node *p,*q;
    start1= NULL;start2=NULL;
Insend(&start1,5);
Insend(&start1,3);
Insend(&start1,2);
Insend(&start1,4);
Insend(&start1,2);
Insend(&start1,5);
Traverse(start1);
printf("\n");
Insend(&start2,3);
Insend(&start2,2);
Insend(&start2,4);
Insend(&start2,2);
Insend(&start2,5);
Traverse(start2);
printf("\n");
addnumbers(&start1,&start2);
printf("\n");
delocc(&start1,2);

}
