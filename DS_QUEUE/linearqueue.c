#include<stdio.h>
#include<stdlib.h>
#define N 10
int f=-1;
int r=-1;
int queue[N];

void enque(int x){
    if(r==N-1)
{
    printf("overflow condition reached\n");
}
else if(f==-1 && r==-1)
{
    f=r=0;
    queue[r]=x;
}
else
{
    r++;
    queue[r]=x;
}
}
void display(){
    int i;
for(i=f;i<=r;i++)
{
    printf("%d ",queue[i]);
}
printf("\n");
}

void deque(){
if(f==-1 && r==-1)
{
    printf("underflow condition reached\n");
}
else if(f==r){
    printf("deleted element is %d\n",queue[f]);
    f=r=-1;
}
else
{
    printf("deleted element is %d\n",queue[f]);
    f++;
}
}

void peek(){
if(f==-1 && r==-1){
    printf("queue is empty\n");}
else
   printf("%d",queue[f]);
}

void main(){
char ch;int a,data;
do{
printf("enter 1 to enque\n2 to deque\n3 to display\n4 to peek\n");
scanf("%d",&a);
switch(a){
case 1:

    printf("enter element to be inserted\n");
    scanf("%d",&data);
    enque(data);

break;
case 2:
deque();
break;
case 3:
    display();
    break;
case 4:
    peek();
break;
default:
    printf("invalid choice\n");
}
 printf("enter y or Y to continue\n");
fflush(stdin);
scanf("%c",&ch);

}while(ch=='y' || ch=='Y');
}
