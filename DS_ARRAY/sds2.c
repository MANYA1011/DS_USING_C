#include<stdio.h>
void main()
{
    int a[50],i,j,x,n,pos;
    printf("enter size of array\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter number to be inserted and position where to insert\n");
    scanf("%d%d",&x,&pos);
    n++;
    for(i=n-1;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=x;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

}
