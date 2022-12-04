#include<stdio.h>
#define MAX 10
#define init -1
struct stack{
 int a[MAX];
 int top;
}s;
void initialize()
{
    s.top=init;
}
int push(int data){
if(s.top==MAX-1)
    printf("overflow\n");
 s.top++;
 s.a[s.top]=data;
 return s.a[s.top];
}
int pop()
{
    if(s.top==-1)
        printf("underflow\n");
    int item=s.a[s.top];
    s.top--;
    return item;
}
void traverse(){
int i;
if(s.top==-1)
    printf("stack is empty\n");
else{
for(i=0;i<=s.top;i++){
    printf("%d ",s.a[i]);
}
}
}
void main()
{
    int n,x,r;char ch;
     initialize();
     do{
    printf("enter 1 to push,2 to pop, 3 to traverse\n");
    scanf("%d",&n);
    switch(n)
    {
case 1:
    printf("enter data to push\n");
    scanf("%d",&x);
    printf("%d",r=push(x));
    break;
case 2:
    printf("%d",r=pop());
    break;
case 3:
    traverse();
    break;
default:
    printf("wrong choice\n");
    }
  printf("\ndo you want to perform operations on stack?\nif yes then press y else press n\n");
  fflush(stdin);
     scanf("%c",&ch);
}while(ch=='y'||ch=='Y');

}
