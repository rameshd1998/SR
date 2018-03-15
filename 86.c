#include<stdio.h>
#include<string.h>
int main()
{
    int i,flag;
char b[100];
printf("enter the string");
scanf("%s",b);
for(i=0;i<strlen(b);i++)
{
b[i]=tolower(b[i]);
}
for(i=0;i<strlen(b);i++)
{
if(b[i]==b[i+1])
{
    flag=1;
    break;
}
}
if(flag==1)
printf("FALSE");
else
printf("true");
return 0;
}
