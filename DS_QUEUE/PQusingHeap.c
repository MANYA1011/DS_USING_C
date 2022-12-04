#include<stdio.h>
int insert(int a[],int N, int key)
{
    a[N+1]=key;
    int i=N+1,temp;
    while(i>=1 && a[i]<a[i/2])
    {
        temp=a[i];
        a[i]=a[i/2];
        a[i/2]=temp;
        i=i/2;
    }
    N=N+1;
    for(i=0;i<=N;i++)
    {
        printf("%d ",a[i]);
    }
    return N;
}
void main(){
int i,n,arr[20],x,k;
printf("enter size of heap\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
printf("enter element to be inserted\n");
scanf("%d",&k);
x=insert(arr,n,k);
}
