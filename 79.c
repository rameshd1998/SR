#include<stdio.h>
int main()
{
int l,n,m,i;
printf("\n enter the nhumber");
scanf("%d",&l);
printf("\n entert the number");
scanf("%d",&n);
m=l*n;
for(i=2;i<m;i++)
{
if(m==i*i)
{
printf("yes");
break;
}
