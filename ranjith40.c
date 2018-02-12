
#include<stdio.h>
void main()
{
	int f1=0,f2=1,f3,n,i;
	printf("Enter the Number of Input:");
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
		f3=f1+f2;
		f1=f2;
		f2=f3;
		printf("%d",f1);
	}
	
