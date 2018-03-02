#include<stdio.h>
int main()
{
int n,i,flag=0;
printf("\n enter the number");
scanf("%d",&n);
for(i=1;i<n;i++)
{
if(n%2==0)
{
flag++;
}
}
if(flag==2)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
