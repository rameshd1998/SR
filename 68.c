#include <stdio.h>

int main(void) {
	int a;
	printf("enter the number:\n");
	scanf("%d",&a);
	if(a%7==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
