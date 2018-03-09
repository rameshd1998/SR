#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("\n enter the number",n);
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
sum++;
}
}
if(n%2==0)
{
printf("\n yes");
}
else
{
printf("no");
}
}
