#include<stdio.h>
int main()
{
int a[723],i,j,temp,n=5;
printf("\n enter the number");
for(i=0;i<=n;i++)
scanf("%d",&a[i]);
for(i=0;i<=n;i++)
{
for(j=i+1;j<=n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}

}

printf("\n%d %d",a[0],a[n]);
}
