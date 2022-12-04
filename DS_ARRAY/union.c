#include<stdio.h>
void main()
{
    int a[20],b[20],c[20],i,j,m,n,c1,k=0;
    printf("enter size of set A\n");
       scanf("%d",&m);
        printf("enter elements in set A\n");
       for(i=0;i<m;i++)
       {
           scanf("%d",&a[i]);
       }
       printf("enter size of set B\n");
       scanf("%d",&n);
       printf("enter elements in set B\n");
       for(i=0;i<n;i++)
       {
           scanf("%d",&b[i]);
       }
       for(i=0;i<m;i++)
       {
           c[k]=a[i];
           k++;
       }
       for(i=0;i<n;i++)
       {
           c1=0;
           for(j=0;j<m;j++)
           {
               if(b[i]==a[j])
                c1++;
           }
           if(c1==0)
           {
            c[k]=b[i];
           k++;
           }
       }
printf("union of sets is:\n");
for(i=0;i<k;i++)
    printf("%d ",c[i]);
}
