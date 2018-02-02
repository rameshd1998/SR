#include <stdio.h>
int main()
{
    int k[10],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&k[i]);
    }
    for(i=0;i<n;i++)
    {
    printf("%d\t%d\n",k[i],i);
    }
    return 0;
}
