#include<stdio.h>
void main()
{
    int a[50],i,j,x,pos,n;
    printf("enter size of array\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter number to be deleted and position of deletion\n");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(x==a[i])
            pos=i;
    }
    n--;
    for(i=pos;i<n;i++)
    {
        a[i]=a[i+1];
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
