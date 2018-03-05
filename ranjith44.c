
# include<stdio.h>
 
int roundoff(float num)
{
    return num < 0 ? num - 0.5 : num + 0.5;
}
 
int main()
{
	int n;
	scanf("%d",&n);
    printf("%d", roundoff(n));
    getch();
}
