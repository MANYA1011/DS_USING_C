#include<stdio.h>
#include"circularLL.h"

int main()
{
    struct node *start1,*start2;
    struct node *p,*q;
    start1= NULL;start2=NULL;
    insbeg(&start1,10);
    insbeg(&start1,20);
    insbeg(&start1,30);
    insbeg(&start1,40);
    Traverse(start1);
    insend(&start2,50);
    insend(&start2,60);
    insend(&start2,70);
    insend(&start2,80);
    insend(&start2,90);
    Traverse(start2);
    //concat(&start1,&start2);
    //rev(&start1);
    rev(&start2);


}
