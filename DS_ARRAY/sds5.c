#include<stdio.h>
void main()
{
    int a[50],i,n,x,pos=-1;
    printf("enter size of array\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter any number to be found\n");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
            pos=i;
    }
    if(pos!=-1)
        printf("no not missing\n");
    else
    printf("%d is missing\n",x);
}
