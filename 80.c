#include<stdio.h>
int main()
{
int n,a,b,x;
printf("\n enter the number\n");
scanf("%d",&n);
while(n>0)
{
	x=n%10;
	if(x%2!=0)
	{
		printf("The odd number is%d\n",x);
		
	}
	n=n/10;
}
}
