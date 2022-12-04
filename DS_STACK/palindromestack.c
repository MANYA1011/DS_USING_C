#include<stdio.h>
#define N 100
int stack[N];
int top=-1;

void main()
{
    int num,i=0,c=0,rev=0,d,r,c1=0;
    printf("enter a number\n");
    scanf("%d",&num);
    r=num;
    /*while(r>0){
        d=r%10;
        rev=rev*10+d;
        r=r/10;
        c++;
    }*/
    while(num>0){
            top++;
        stack[top]=num%10;
        num=num/10;
        c++;
        }
        while(r>0){
            if(r%10==stack[top]){
                c1++;
                top--;}
                r=r/10;

        }
        if(c==c1){
            printf("palindrome\n");
        }
        else
            printf("not palindrome\n");
}
