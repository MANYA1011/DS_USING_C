#include<stdio.h>
void main()
{
    int a[20],b[20],c[20],d[20],i,j,m,n,k=0,c1;
    printf("enter size of set A\n");
    scanf("%d",&m);
    printf("enter elements in set A\n");
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
    printf("enter size of set B\n");
    scanf("%d",&n);
    printf("enter elements in set B\n");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(i=0;i<m;i++)
      {
        c1=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                c1=1;
                break;
            }
        }
            if(c1==0)
            {
                c[k]=a[i];
                k++;
            }

    }
    printf("difference of A-B is:\n");
    for(i=0;i<k;i++)
        printf("%d ",c[i]);
        k=0;
        for(i=0;i<n;i++)
      {
        c1=0;
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                c1=1;
                break;
            }
        }
            if(c1==0)
            {
                d[k]=b[i];
                k++;
            }

    }
    printf("difference of B-A is:\n");
    for(i=0;i<k;i++)
        printf("%d ",d[i]);
}
