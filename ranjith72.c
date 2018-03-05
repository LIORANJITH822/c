
#include<stdio.h>
#include<string.h>
void main()
{
char a[100];
int i,count=0;;
printf("Enter the string:");
gets(a);
for(i=0;i!=strlen(a);i++)
{
if(a[i]=='a'||a[i]=='e'||a=='i'||a[i]=='o'||a[i]=='u')
count++;
}
if(count==0)
printf("Vowel is not present");
else
printf("Vowel is present");
getch();
}
