#include<stdio.h>
void main()
{
int a[10],n,i,sum=0,average;
printf("\n enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
sanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
average=sum/n;
printf("%d",average);
return 0;
}
