#include<stdio.h>
void main()
{
int a,b,temp;
printf("\n enter the of a and b");
scanf("%d",&a,&b);
printf("\n  before swapping %d%d",a,b);
temp=a;
a=b;
b=temp;
printf("\n after swapping%d%d",a,b);
}
