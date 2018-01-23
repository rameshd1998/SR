#include<stdio.h>
void main()
{
int n,sum=0,rem=0,cube,min,max;
printf("Enter the min and max value");
scanf("%d %d",&min,&max);
for(i=min;i<max;i++)
{
printf("Enter the number");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
cube=rem*rem*rem;
sum=sum+cube;
n=n/10;
}
}
if(sum==n)
printf("It is an amstrong number %d",n);
else
printf("It is not an amstrong number %d",n);
}
