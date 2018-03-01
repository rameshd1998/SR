#include<stdio.h>
void main()
{
char s[10];
int i,n,flag=1;
gets(s);
n=strlen(s);
for(i=0;i<n;i++)
{
if(s[i]==" ")
{
flag++;
}
}
printf("%d",flag);
}
