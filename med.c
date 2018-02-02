#include <stdio.h>
int main(void) {
	int a[3],i,j,b;
	printf("\nEnter the elements");
	for(i=0;i<3;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++)
	{
	 for(j=i+1;j<3;j++)
     {
    
	if(a[i]>a[j])
	{
		b=a[j];
		a[j]=a[i];
		a[i]=b;
	}
    }
	}
	printf("\nThe median element is:%d",a[1]);
	return 0;
}
