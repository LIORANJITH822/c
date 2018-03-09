
#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int n,i,j,c=0;
    printf("Enter the string:");
    scanf("%s",a);
    n=strlen(a);
    for(i=0,j=i+1;i<n&&j<n;i++,j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }

    if(c==0)
    {
    printf("ISOGRAM");
    }
    else
    {
    printf("NOT ISOGRAM");
    }
    getch();
}
