#include<stdio.h>
void main()
{
int a,i=0,x=0,sum=0;
printf("\n enter the number");
scanf("%d",&a);
while(a>0)
{
x=a%10;
a=a/10;
}
sum=sum+x;
printf("\n%d",sum);
}
