#include<stdio.h>
int main()
{
    int a,b,i;
    char d;
    for(i=1;i<4;i++)
    {
        scanf("%d %d %c",&a,&b,&d);
    }
    if(i%2==0)
    {
        printf("\n%d",(a/b));
        
    }

else
{
    printf("\n%d",(a%b));
}
return 0;
}
