#include<stdio.h>
void main()
{
    int a[20],b[20],c[20],d[20],e[20],i,j,k=0,k1=0,k2=0,m,n,c1,c2,c3,*p;
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
                    c1++;
            }
            if(c1==0)
                {
                    c[k]=a[i];
                    k++;
                }
        }
        for(i=0;i<n;i++)
        {
            c2=0;
            for(j=0;j<m;j++)
            {
                if(b[i]==a[j])
                    c2++;
            }
            if(c2==0)
            {
                c[k]=b[i];
                k++;
            }
        }
        printf("symmetric difference is:\n");
           for(i=0;i<k;i++)
            printf("%d ",c[i]);

}
