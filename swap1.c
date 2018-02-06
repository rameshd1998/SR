#include<stdio.h>
void main()
{
int j,k,temp;
printf("\n enter the first number");
scanf("%d",&j);
printf("\n enter the second number");
scanf("%d",&k);
temp=j;
j=k;
k=temp;
printf("\n before swapping %d",j);
printf("\n after swapping %d",k);
return 0;
}
