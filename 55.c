#include<stdio.h>
int main(void)
{
	int a,b,c;
	printf("Enter the two numbers a and b");
  scanf("%d\t%d",&b,&a);
  c=b*a;
	if(c%2==0)
	{
		printf("The product of two number is even");
	}
	else
	{
		printf("The product of two number is odd");
	}
	return 0;
}
