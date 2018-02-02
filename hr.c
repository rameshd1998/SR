#include<stdio.h>
int main()
{
int m,time,min;
printf("\n enter the mintues");
scanf("%d",&m);
printf("%d \n",min);
time=min/60;
min=min%60;
printf("%d hour %d min \n",time,min);
return 0;
}
