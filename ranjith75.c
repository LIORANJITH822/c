#include<stdio.h>
void main()
{
char str[100];
int m,l;
scanf("%s",&str);
l=strlen(str);
if(l%2!=0)
m=l/2;
str[m]='*';
printf("%s",str);
else
m=l/2;
str[m]='*';
str[m-1]='*';
printf("%s",str);
getch();
}
