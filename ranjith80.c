#include <stdio.h>

int main(void) {
	char a[10];
	int x,i;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		
		x=(int)(a[i]);
		if(x%2!=0)
		{
			printf("\n%c",a[i]);	
		}
	}
	getch();
}
