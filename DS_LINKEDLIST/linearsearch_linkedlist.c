#include<stdio.h>
#include<stdlib.h>
struct node{
int info;
struct node *next;
};

struct node *start;

struct node *GetNode(){
struct node *p;
p=(struct node*)malloc(sizeof(struct node));
return p;
}
void insbeg(int data){
struct node *p;
p=GetNode();
p->info=data;
p->next=start;
start=p;
}
void insaft(int **x,int data){
struct node *p,*temp;
temp=start;
if(temp->next==NULL){
    temp->info=data;
    start=temp;
}
else{
while(temp->next!=NULL){
    if(temp->info==*x)
        break;
    else
        temp=temp->next;
}
p=GetNode();
p->info=data;
p->next=temp->next;
temp->next=p;
}
}

void traverse(int key){
struct node *temp;int c=0,l=-1;
temp=start;
while(temp!=NULL){
    printf("%d ",temp->info);
    temp=temp->next;
}
temp=start;
while(temp->next!=NULL){
    c++;
    if(temp->info==key){
            l++;
        printf("\n%d found at %d node",key,c+1);
        break;}
    temp=temp->next;
}
if(l==-1)
    printf("\n%d is not present in linked list",key);
}

void main(){
start= NULL;
insaft(&start,10);
traverse(50);
}
