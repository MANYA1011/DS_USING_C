#include<stdio.h>
#define N 100
int stack[N];
int top=-1;
void main(){
char s[20];int i=0;
printf("enter a string\n");
gets(s);
while(s[i]!='\0')
{
    top++;
    stack[top]=s[i];
    i++;
}
while(top!=-1)
{
    printf("%c",stack[top]);
    top--;
}
}
