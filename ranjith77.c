
#include<stdio.h>
void main()
{
int a,i;
scanf("%d",&a);
printf("The factors are:");
for(i=0;i<100;i++)
{
if(a%i==0)
printf("%d",i);
}
getch();
}
