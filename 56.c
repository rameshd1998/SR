#include <stdio.h>
int main() 
{
	char b[1000];
	int count=0,i;
	printf("enter the string ");
	scanf("%[^\n]s",b);
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]>='a'&&b[i]<='z'||b[i]>='A'&&b[i]<='Z')
		{
		count++;
		break;
					}
	}
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]>='0'&&b[i]<='8')
		{
		count++;
		break;
				}
	}
	if(count==2)
	printf("yes");
	else
	printf("no");
	return 0;
}
