#include<stdio.h>
#include<stdlib.h>
#include"circularLL.h"


int main()
{
    struct node *start;
    start=NULL;
    insend(&start,10);
    insend(&start,20);
    insend(&start,30);
    insend(&start,40);
    insend(&start,50);
    insend(&start,60);
    insend(&start,70);
    insend(&start,80);
    insend(&start,90);
    insend(&start,120);
    insend(&start,140);
    insend(&start,150);
    insend(&start,160);
    insend(&start,170);
    insend(&start,180);
    insend(&start,190);
    insend(&start,200);
    insend(&start,210);
    Traverse(start);
    Josephus(&start);
}
