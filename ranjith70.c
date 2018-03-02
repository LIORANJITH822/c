#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	int p=1;
	while(p<n)
	{
		p<<=1;
	}
	printf("%d",p);
	getch();
}
