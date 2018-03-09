#include<stdio.h>
int main()
{
int num,i;
printf("\n enter the positive number",num);
scanf("%d",&num);
printf("1%d",num);
printf("\n factors of are %d",num);
for(i=1;i<=num;++i)
{
if(num%i==0)
{
printf("%d",i);
}
}
}
