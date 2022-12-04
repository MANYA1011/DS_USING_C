#include<stdio.h>
#include"circularLL.h"

int main()
{
    struct node *start1,*start2;
    struct node *p,*q;
    start1= NULL;start2=NULL;
    insbeg(&start1,2);
    insbeg(&start1,9);
    insbeg(&start1,5);
    insbeg(&start1,8);
    insbeg(&start1,1);
    insbeg(&start1,6);
    insbeg(&start1,12);
    insbeg(&start1,15);
    Traverse(start1);
    fibonacci(&start1);
    pattern(&start1);
    insend(&start2,50);
    insend(&start2,60);
    insend(&start2,70);
    insend(&start2,80);
    insend(&start2,90);
    Traverse(start2);
    pattern(&start2);

}

