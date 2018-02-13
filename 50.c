#include<stdio.h>
int main()
{
int n,i,a=1,flag=0;
printf("\n enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
a=2*a;
if(n==a)
{
flag=1;
}
}
if(flag==1)
printf("yes");
else
printf("no");
}
