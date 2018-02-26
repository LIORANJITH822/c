
#include<stdio.h>
void main()
{
char ch[100][100];
int i,n,num,count=0,len;
clrscr();
printf("Enter N:");
scanf("%d",&n);
printf("\n Enter the words:");
for(i=0;i<=n;i++)
{
gets(ch[i]);
}
printf("\n Enter the length to search word:");
scanf("%d",&num);
for(i=0;i<=n;i++)
{
len=strlen(ch[i]);
if(num==len)
{
count++;
}
}
printf("\nNumber of words are:%d",count);
getch();
}
