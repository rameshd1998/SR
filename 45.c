#include <stdio.h>
int main()
{
   int a;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%d", &a);

    while(a != 0)
    {
       
        a/= 10;
        ++count;
    }

    printf(" %d", count);
}
