# include<stdio.h>
 
int roundoff(float num)
{
    return num < 0 ? num - 0.5 : num + 0.5;
}
 
int main()
{
	int a;
	scanf("%d",&a);
    printf("%d", roundoff(a));
    return 0;
}
