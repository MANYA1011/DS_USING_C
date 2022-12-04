#include<stdio.h>
int insert(int arr[],int i,int x,int N)
{
    int j;
    for(j=N-1;j>=i-1;j--)
    {
    arr[j+1]=arr[j];
    }
    arr[i-1]=x;
    N=N+1;
    for(i=0;i<N;i++)
    {
        printf("%d ",arr[i]);
    }
    return N;
}

int del(int arr[],int i,int N)
{
    int x,j;
    x=arr[i-1];
    for(j=i;j<=N-1;j++)
    {
        arr[j-1]=arr[j];
    }
    N=N-1;

    for(i=0;i<=N-1;i++)
    {
        printf("%d ",arr[i]);
    }
    return x;
}

int PQinsert(int a[],int N,int PRN)
{
    int i=0,n;
    while(PRN>=a[i])
    {
        i++;
    }
   n= insert(a,i+1,PRN,N);
   return n;
}
int PQdel(int a[],int N)
{
    int x=del(a,1,N);
    return x;
}
void main()
{
    int a[20],r,pos,data,i,n,n1;
    printf("enter size of array\n");
    scanf("%d",&n);
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter position and element to be inserted\n");
    scanf("%d %d",&pos,&data);
    n1=PQinsert(a,n,data);
    printf("\nenter position from where to delete\n");
    scanf("%d",&pos);
   r=PQdel(a,n1);
   printf("\n%d is deleted\n",r);
}
