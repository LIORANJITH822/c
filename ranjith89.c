#include <stdio.h>
#include<string.h>
int main() 
{
	int i,j,temp=0;
	char s[100];
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		for(j=i+1;s[j]!='\0';j++)
		{
			if(s[i]>s[j])
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	puts(s);
 getch();
}
