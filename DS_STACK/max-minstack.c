#include<stdio.h>
#define N 10
int stack[N];
int top=-1;

void main(){
    int i,max=0,min=100,j,temp;
printf("enter elements in stack\n");
for(i=0;i<N;i++){
    top++;
    scanf("%d",&stack[top]);
}

while(top!=-1)
{
    if(stack[top]>max)
        max=stack[top];
    else if(stack[top]<min)
        min=stack[top];
    top--;
}
printf("The largest element is %d\n",max);

printf("The smallest element is %d\n",min);


}
j=i=top;
while(i!=-1)
{
    while(j!=top-i)
    {
        if(stack[j-1]>)
    }
}
