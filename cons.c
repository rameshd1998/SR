#include<stdio.h>
void main()
{
    int b[20],i,j,temp;
    int number;
    scanf("%d",&number);
    printf(" enter the array");
    for(i=0;i<number;i++)
    {
        scanf("%d",&b[i]);
    }
     for(i=0;i<number;i++)
    {
        for(j=i+1;j<number;j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    printf("\n the sorted array is");
     for(i=0;i<number;i++)
    {
        printf("%d",b[i]);
    } 
    printf("\n %d",b[number/2]);
}
