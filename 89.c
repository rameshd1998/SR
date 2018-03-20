#include<stdio.h>
int main()
{
int a[10],b[10];
int i,j,k;
for(i=0;i<a[i];i++)
printf("\nn enter the number");
scanf("%d",&a);
int len=strlen(a);
 for(i=0;i<len;i++)
 {
 for(j=i+1;j<len;j++)
 {
 if(a[i]<a[j])
 {
 b[k]=a[i];
 a[i]=a[j];
 a[j]=b[k];
 }
 }
 }
 for(i=0;i<len;i++)
 printf("%s",a[i]);
 }
