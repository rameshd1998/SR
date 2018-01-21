#include<stdio.h>
void main()
{
int n,i,count=0;
scanf("%d",&n);
for(i=2;i<5;i++)
{
   if((n%i)==0)
     ++count;
  }
  if(count==0)
{
printf("a prime number");
}
else
{
printf("a not prime numbeer");
}
return 0;
}
