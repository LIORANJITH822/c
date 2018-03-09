#include <stdio.h>
int main()
{
	int n1,n2,gcd,lcm,i;
	scanf("%d %d",&n1,&n2);
	for(i=1;i<=n1&&i<=n2;i++)
	{
	  if(n1%i==0 && n2%i==0)        //checks if i is factor of n1 and n2
	  {
	      gcd=i;
	  }
	}
	lcm=(n1*n2)/gcd;
	printf("lcm of %d and %d is %d",n1,n2,lcm);
}
getch();
}
