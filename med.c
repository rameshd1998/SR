#include <stdio.h>
int main(void) 
{
	int b[3],i,j,c;
	printf("\nEnter the elements");
	for(i=0;i<3;i++)
	{
	    scanf("%d",&b[i]);
	}
	for(i=0;i<3;i++)
	{
	 for(j=i+1;j<3;j++)
     {
    
	if(b[i]>b[j])
	{
		c=b[j];
		b[j]=b[i];
		b[i]=c;
	}
    }
	}
	printf("\nThe median element is:%d",b[1]);
	return 0;
}
