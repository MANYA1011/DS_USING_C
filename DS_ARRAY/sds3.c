#include<stdio.h>
void main()
{
    int a[50],i,n,pos,x;
    printf("enter size of array\n");
    scanf("%d",&n);
    printf("enter elements in array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("enter number to be inserted\n");
        scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(x>a[i]&&x<a[i+1])
            pos=i+1;
    }
    n++;
    for(i=n-1;i>pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=x;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
