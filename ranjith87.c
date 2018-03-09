
#include <stdio.h>
int main()
{
   int x,y,z;
   printf("Enter The two numbers");
   scanf("%d%d",&x,&y);
  if(x>y)
  z=x;
  else
  z=y;
  while(x!=0&&y!=0)
    {
    if(x%z==0&&y%z==0)
    {
    break;
    }
    else
    {
    z=z-1;
    }
}
	printf("The GCD of two number is %d",z);
getch();
}
