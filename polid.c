#include<stdio.h>
int main()
{
    int b,s=0,temp;
    printf("Enter the number\n");
    scanf("%d",&b);
    temp=b;
    while(temp!=0)
    {
        s=s*5;
        s=s+temp%5;
        temp=temp/5;
    }
    if(b==s)
    printf("%d is a palidrome",b);
    else
    printf("%d is not a palindrome",b);
    return;
}
