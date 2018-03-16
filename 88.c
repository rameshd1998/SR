#include<stdio.h>
int main()
{
    int n1,n2,multiple;
    printf("\n enter the number");
    scanf("%d %d",&n1,&n2);
    multiple= (n1>n2) ? n1:n2;
while(1)
{
    if(multiple%n1==0 &&  multiple%n2==0)
    {
        printf("\nthe lcm %d and %d %d", n1,n2,multiple);
    }break;
    }++multiple;
}
