#include<stdio.h>
void main()
{
    int a[20],b[20],i,j,k=0,c[20],m,n,t;
    printf("enter m\n");
    scanf("%d",&m);
    printf("enter n\n");
    scanf("%d",&n);
    printf("enter 1st array\n");
    for(i=0;i<m;i++){
        scanf("%d",&a[i]);}
        printf("enter 2nd array\n");
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);}
      i=0;j=0;
       while(i<=m && j<=n)
       {
           if(a[i]<b[j])
           {
               c[k]=a[i];
               k++;i++;
           }
        else if(a[i]>b[j])
           {
               c[k]=b[j];
               k++;j++;
           }
       }

           while(i<=m)
           {
               c[k]=a[i];
               i++;
               k++;
           }
       while(j<=n)
       {
           c[k]=b[j];
           j++;
           k++;
       }



    for(i=0;i<k;i++)
        printf("%d ",c[i]);
}
