#include<stdio.h>
void main()
{
int i,n,a=0,b=1,c;
printf("\n enter the terms");
scanf("%d",&n);
printf("fibonacci series");
for(i<0;i<=n;i++)
{
c=a+b;
a=b;
b=c;
printf("%d %d",a,b);
}
}
