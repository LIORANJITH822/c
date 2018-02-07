#include<stdio.h>
#include<math.h>
void main()
{
char str[50];
int words = 0, len = 0, i;
clrscr();
printf(“\n\n\t ENTER A STRING…: “);
gets(str);
while(str[len]!=’\0′)
len++;
len–;
for(i=0;i<=len;i++)
{
if ( ( str[i] == ‘ ‘ && str[i+1] != ‘ ‘ ) || i == len )
words++;
}
printf(“\n\t NUMBER OF WORDS IN THE ABOVE SENTENCE IS…: %d”, words);
getch();
}
