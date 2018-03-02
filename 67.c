#include<stdio.h>
void main()
{
int a;
printf("\n enter the number");
scaf("%d",&a);
do
{
a++;
}
while(a%10!=0)
{
printf("%d",a);
}
}
