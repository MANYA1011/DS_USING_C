#include<stdio.h>
#include<stdlib.h>
#define N 5
int f=-1;
int r=-1;
int queue[N];

void enquerear(int x){
if(f==0 && r==N-1 || f==N+1){
    printf("overflow\n");
}
else if(f==-1 && r==-1){
    f=r=0;
    queue[f]=x;
}
else if(r==N-1){
    r=0;
    queue[r]=x;
}
else{
    r++;
    queue[r]=x;
}
}

void enquefront(int x){
if(f==0 && r==N-1 || f==N+1){
    printf("overflow\n");
}
else if(f==-1 && r==-1){
    f=r=0;
    queue[f]=x;
}

else if(f==0){
    f=N-1;
    queue[f]=x;
}
else{
    f--;
    queue[f]=x;
}
}

void dequefront(){
if(f==-1 && r==-1){
    printf("queue is empty\n");
}
else if(f==r){
        printf("deleted element is %d\n",queue[f]);
    f=r=-1;
    }
else if(f==N-1)
{
    printf("deleted element is %d\n",queue[f]);
    f=(f+1)%N;
}
else
{
    printf("deleted element is %d\n",queue[f]);
    f++;
}
}

void dequerear(){
if(f==-1 && r==-1){
    printf("queue is empty\n");
}
else if(f==r){
     printf("deleted element is %d\n",queue[f]);
    f=r=-1;
}
else if(r==0){
   printf("deleted element is %d\n",queue[r]);
   r=N-1;
}
else
{
    printf("deleted element is %d\n",queue[r]);
    r--;
}
}

void display(){
    int i=f;
    if(r==0 && f==0){
        printf("%d ",queue[f]);
    }
while(i!=r)
{
    printf("%d ",queue[i]);
    i=(i+1)%N;
}
printf("%d",queue[r]);
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
    f=(f+1)%N;
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
printf("enter 1 to enque at rear\n2 to enque at front\n3to deque at front\n4 to deque at rear\n5to display\n6to peek");
scanf("%d",&a);
switch(a){
case 1:

    printf("enter element to be inserted\n");
    scanf("%d",&data);
    enquerear(data);

break;
case 2:
    printf("enter element to be inserted\n");
    scanf("%d",&data);
enquefront(data);
break;
case 3:
    dequefront();
    break;
case 4:
    dequerear();
break;
case 5:
    display();
    break;
case 6:
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
