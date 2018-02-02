#include<stdio.h>
void main()
{
int k,l,m,n,s,r;
printf("enter two times in hr:min");
scanf("%d%d%d%d",&k,&l,&m,&n);
printf("%d:%d\n %d:%d",k,l,m,n);
s=k-m;
r=l-n;
printf("time %d:%d",s,r);
}
