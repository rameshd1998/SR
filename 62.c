#include<stdio.h>
#include<string.h>
void main()
{
char a[10];
gets(a);
int i,count=0,n;
n=strlen(a);
for(i=0;i<n;i++)
if(a[i]=='1'||a[i]=='0')
{
count=1;
}else
{count=0;
break;
}
if(count==1)
{
printf("yes");
}
else
{
printf("no");
}
}
